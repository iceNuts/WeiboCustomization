
BOOL being_blocked(id request){
	//For request from Weibo(block all?) & having filtered words
	return YES;
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
