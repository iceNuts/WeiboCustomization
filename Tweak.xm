#define PrefFilePath @"/var/mobile/Library/Preferences/com.icenuts.wcsettings.plist" 

BOOL being_blocked(id request){
	//For request from Weibo(block all?) & having filtered words
	id pref = [[NSDictionary alloc] initWithContentsOfFile: PrefFilePath];
	BOOL isEnabled = [[pref objectForKey: @"enabled"] boolValue];
	BOOL isFiltered = [[pref objectForKey: @"filter"] boolValue];
	BOOL Weibo = [[request sectionID] rangeOfString: @"com.sina.weibo" options: 0].location == NSNotFound? NO : YES;
	if(isEnabled && Weibo){
		if(isFiltered){
			id message = [request message];
			for(int i = 1; i <= 5; i++){
				id str = [pref valueForKey: [@"key" stringByAppendingFormat: @"%i", i]];
				if(!str)
					continue;
				NSRange range = [message rangeOfString: str options: 0];
				if(range.location != NSNotFound){
					[pref release];
					return YES;
				}
			}
		}
	}
	[pref release];
	return NO;
}

%hook BBServer
-(void)_publishBulletinRequest:(id)request forDataProvider:(id)dataProvider forDestinations:(int)destinations{
	NSLog(@"Missile: Incoming");
	if(being_blocked(request)){
		return;
	}
	%orig;
}
%end
