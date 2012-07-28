GO_EASY_ON_ME=1
include theos/makefiles/common.mk

TWEAK_NAME = WeiboCustomization
WeiboCustomization_FILES = Tweak.xm
SUBPROJECTS = weibocustomizationsettings

include $(THEOS_MAKE_PATH)/tweak.mk
include $(THEOS_MAKE_PATH)/aggregate.mk
