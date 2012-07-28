#define PrefFilePath @"/var/mobile/Library/Preferences/com.icenuts.wcsettings.plist" 

@interface PSListController{
    NSArray *_specifiers;
}
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
@end

@interface wcfilterListController: PSListController {
}
@end

@implementation wcfilterListController
- (id)specifiers {
	if(_specifiers == nil) {
		_specifiers = [[self loadSpecifiersFromPlistName:@"wcfilter" target:self] retain];
	}
	return _specifiers;
}
@end

// vim:ft=objc
