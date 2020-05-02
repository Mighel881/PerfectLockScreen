THEOS_DEVICE_IP = iphone
ARCHS = arm64 arm64e
TARGET = iphone:clang:13.2:13.2

INSTALL_TARGET_PROCESSES = SpringBoard
GO_EASY_ON_ME = 1

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = PerfectLockScreen13
PerfectLockScreen13_FILES = PerfectLockScreen13.xm
PerfectLockScreen13_CFLAGS = -fobjc-arc -Wno-logical-op-parentheses
PerfectLockScreen13_LIBRARIES += sparkcolourpicker
PerfectLockScreen13_EXTRA_FRAMEWORKS += Cephei

BUNDLE_NAME = com.johnzaro.perfectlockscreen13
com.johnzaro.perfectlockscreen13_INSTALL_PATH = /var/mobile/Library

include $(THEOS)/makefiles/bundle.mk
include $(THEOS_MAKE_PATH)/tweak.mk

SUBPROJECTS += Preferences
include $(THEOS_MAKE_PATH)/aggregate.mk