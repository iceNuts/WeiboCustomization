GO_EASY_ON_ME=1
include theos/makefiles/common.mk

TWEAK_NAME = WeiboCustomization
WeiboCustomization_FILES = Tweak.xm
WeiboCustomization_FRAMEWORKS= UIKit
WeiboCustomization_PRIVATE_FRAMEWORKS= AppSupport
SUBPROJECTS = weibocustomizationsettings

include $(THEOS_MAKE_PATH)/tweak.mk
include $(THEOS_MAKE_PATH)/aggregate.mk
