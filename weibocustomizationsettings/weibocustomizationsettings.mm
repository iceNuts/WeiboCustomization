#define PrefFilePath @"/var/mobile/Library/Preferences/com.icenuts.wcsettings.plist" 

@interface PSListController{
    NSArray *_specifiers;
}
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
@end

@interface weibocustomizationsettingsListController: PSListController {
}
@end

@implementation weibocustomizationsettingsListController
- (id)specifiers {
	if(_specifiers == nil) {
		_specifiers = [[self loadSpecifiersFromPlistName:@"weibocustomizationsettings" target:self] retain];
	}
	return _specifiers;
}
@end

// vim:ft=objc
