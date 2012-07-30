#define PrefFilePath @"/var/mobile/Library/Preferences/com.icenuts.wcsettings.plist" 

@interface CPDistributedMessagingCenter
+ (id)centerNamed:(id)arg1;
- (BOOL)sendMessageName:(id)arg1 userInfo:(id)arg2;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2;
@end

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
- (id)init{
	CPDistributedMessagingCenter *
		center = [CPDistributedMessagingCenter centerNamed:@"com.icenuts.weibo.ads"];
		if(![center doesServerExist]){
			[center runServerOnCurrentThread];
			[center registerForMessageName:@"com.icenuts.ads.remove" target:self selector:@selector(handleWeiboAds:userInfo:)];
		}
	return %orig;
}

%new(@@:@@)
- (NSDictionary*)handleWeiboAds:(NSString *)name userInfo:(NSDictionary *)userInfo{
	if([name isEqualToString:@"com.icenuts.ads.remove"]){
		NSDictionary* reply;
		id pref = [[NSDictionary alloc] initWithContentsOfFile: PrefFilePath];
		BOOL Ads = [[pref objectForKey: @"removeAds"] boolValue];
		if(Ads)
			reply = [NSDictionary dictionaryWithObjectsAndKeys: @"1", @"msg",nil ];
		else
			reply = [NSDictionary dictionaryWithObjectsAndKeys: @"0", @"msg",nil ];		
		return reply;
	}
}

//Disable Push
-(void)_publishBulletinRequest:(id)request forDataProvider:(id)dataProvider forDestinations:(int)destinations{
	NSLog(@"Missile: Incoming");
	if(being_blocked(request)){
		return;
	}
	%orig;
}
%end

BOOL checkAds(){
	CPDistributedMessagingCenter *center;
	center = [CPDistributedMessagingCenter centerNamed:@"com.icenuts.weibo.ads"];
	NSDictionary* reply = [center sendMessageAndReceiveReplyName:@"com.icenuts.ads.remove" userInfo: nil];
	if([[reply valueForKey: @"msg"] isEqualToString: @"1"])
		return YES;
	else
		return NO;
}

//Remove Ads
%hook WBAdManager
- (void)loadServerAd{
	NSLog(@"--Ads Server--");
	if(checkAds())
		return;
	%orig;
}
- (void)presentAds{
	if(checkAds())
		return;
	%orig;
}
%end

%hook WBAdViewContainer
- (void)presentNextAd{
	if(checkAds())
		return;
	%orig;
}
- (void)presentAds{
	if(checkAds())
		return;
	%orig;
}
%end

%hook HomeViewController
- (void)showAd{
	if(checkAds())
		return;
	%orig;
}
%end

%hook TweetterAppDelegate
- (void)showAd{
	NSLog(@"Ad: Sorry Majesty, I won't show again!");
	if(checkAds()){
		[self showAppContent];
		return;
	}
	%orig;
}
%end

%hook WBContentAdHintBoard
- (void)settingContentAdPhoto:(id)arg1{
	NSLog(@"HintBoard: Sorry Majesty, I won't show again!");
	if(checkAds()){
		return;
	}
	%orig;
}
- (id)initWithFrame:(struct CGRect)arg1 dismissDirection:(int)arg2{
	NSLog(@"HintBoard: Sorry Majesty, I won't show again!");
	if(checkAds()){
		return nil;
	}
	%orig;
}
%end


