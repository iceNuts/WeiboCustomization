#define PrefFilePath @"/var/mobile/Library/Preferences/com.icenuts.wcsettings.plist" 

@interface PSListController{
    NSArray *_specifiers;
}
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
@end

@interface wcfilterDangerListController: PSListController {
}
@end

@implementation wcfilterDangerListController
- (id)specifiers {
	
	id av = [[UIAlertView alloc] initWithTitle: @"Warning!" message:@"时间线过滤功能正处于试验阶段，目前仅支持iPhone,如果遇到任何困扰，请关闭此功能并通过微博反馈给_iceNuts" delegate:nil cancelButtonTitle:@"好" otherButtonTitles:nil];
	[av show];
	
	if(_specifiers == nil) {
		_specifiers = [[self loadSpecifiersFromPlistName:@"wcfilterdangerzone" target:self] retain];
	}
	return _specifiers;
}
@end

// vim:ft=objc
