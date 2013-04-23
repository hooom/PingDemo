#/**********************************************************\ 
#
# Auto-Generated Plugin Configuration file
# for Ping Demo
#
#\**********************************************************/

set(PLUGIN_NAME "PingDemo")
set(PLUGIN_PREFIX "P_D")
set(COMPANY_NAME "tsinghua")

# ActiveX constants:
set(FBTYPELIB_NAME PingDemoLib)
set(FBTYPELIB_DESC "PingDemo 1.0 Type Library")
set(IFBControl_DESC "PingDemo Control Interface")
set(FBControl_DESC "PingDemo Control Class")
set(IFBComJavascriptObject_DESC "PingDemo IComJavascriptObject Interface")
set(FBComJavascriptObject_DESC "PingDemo ComJavascriptObject Class")
set(IFBComEventSource_DESC "PingDemo IFBComEventSource Interface")
set(AXVERSION_NUM "1")

# NOTE: THESE GUIDS *MUST* BE UNIQUE TO YOUR PLUGIN/ACTIVEX CONTROL!  YES, ALL OF THEM!
set(FBTYPELIB_GUID 2cc5e1fd-d925-5964-9bec-3dc41bbf70c1)
set(IFBControl_GUID 03619de2-52bb-58a3-b655-10824169f925)
set(FBControl_GUID 347417e0-41ff-597f-b272-cb23844ee896)
set(IFBComJavascriptObject_GUID 90d2d363-7e3f-58f7-9805-385ceecb0a60)
set(FBComJavascriptObject_GUID 3c46ab8d-ad03-52c8-a753-d245c8769936)
set(IFBComEventSource_GUID a9c857d7-772f-562e-9a48-23a1dc98d071)
if ( FB_PLATFORM_ARCH_32 )
    set(FBControl_WixUpgradeCode_GUID 667d5fb8-7b71-53c4-9e72-87d5c09cf30e)
else ( FB_PLATFORM_ARCH_32 )
    set(FBControl_WixUpgradeCode_GUID 2df15880-9c4f-5898-871a-671bcbc0f9ff)
endif ( FB_PLATFORM_ARCH_32 )

# these are the pieces that are relevant to using it from Javascript
set(ACTIVEX_PROGID "tsinghua.PingDemo")
set(MOZILLA_PLUGINID "ccert.edu.cn/PingDemo")

# strings
set(FBSTRING_CompanyName "tinghua.edu.cn")
set(FBSTRING_PluginDescription "test ping")
set(FBSTRING_PLUGIN_VERSION "1.0.0.0")
set(FBSTRING_LegalCopyright "Copyright 2013 tinghua.edu.cn")
set(FBSTRING_PluginFileName "np${PLUGIN_NAME}.dll")
set(FBSTRING_ProductName "Ping Demo")
set(FBSTRING_FileExtents "")
if ( FB_PLATFORM_ARCH_32 )
    set(FBSTRING_PluginName "Ping Demo")  # No 32bit postfix to maintain backward compatability.
else ( FB_PLATFORM_ARCH_32 )
    set(FBSTRING_PluginName "Ping Demo_${FB_PLATFORM_ARCH_NAME}")
endif ( FB_PLATFORM_ARCH_32 )
set(FBSTRING_MIMEType "application/x-pingdemo")

# Uncomment this next line if you're not planning on your plugin doing
# any drawing:

#set (FB_GUI_DISABLED 1)

# Mac plugin settings. If your plugin does not draw, set these all to 0
set(FBMAC_USE_QUICKDRAW 0)
set(FBMAC_USE_CARBON 1)
set(FBMAC_USE_COCOA 1)
set(FBMAC_USE_COREGRAPHICS 1)
set(FBMAC_USE_COREANIMATION 0)
set(FBMAC_USE_INVALIDATINGCOREANIMATION 0)

# If you want to register per-machine on Windows, uncomment this line
#set (FB_ATLREG_MACHINEWIDE 1)
