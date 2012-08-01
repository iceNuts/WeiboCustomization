GO_EASY_ON_ME=1
include theos/makefiles/common.mk

BUNDLE_NAME = weibocustomizationsettings
weibocustomizationsettings_FILES = weibocustomizationsettings.mm wcfilterListController.mm wcfilterDangerListController.mm
weibocustomizationsettings_INSTALL_PATH = /Library/PreferenceBundles
weibocustomizationsettings_FRAMEWORKS = UIKit
weibocustomizationsettings_PRIVATE_FRAMEWORKS = Preferences

include $(THEOS_MAKE_PATH)/bundle.mk

internal-stage::
	$(ECHO_NOTHING)mkdir -p $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences$(ECHO_END)
	$(ECHO_NOTHING)cp entry.plist $(THEOS_STAGING_DIR)/Library/PreferenceLoader/Preferences/weibocustomizationsettings.plist$(ECHO_END)
