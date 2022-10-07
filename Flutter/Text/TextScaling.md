## How to make Flutter app font size independent from device settings?

### Problem:
    Whenever you are giving a fix sizes to text in your application, It will be fixed for all resolutions but if you will increase/decrease font size from system settings of phone then it will also increase/decrease based on settings. Here we have solution that how we can prevent to increase/decrease the font size based on device font size.
    
### Solution:
    We will give the font size same as we are giving. But we will implement the Scale Factor for device settings. In that we will give range that my font will be increase/decrease this much ratio only.
    
    Here in example we have given 1.0 to 1.3, In that 1.0 is default size which we have set in system and 1.3 is maximum ratio.
    
    Setting the textScaleFactor to 1.0 and calling it a day means ignoring your user's needs. They’re asking for bigger text size and you are not delivering it.

**Let's make it more adaptive**

You can choose the minimum factor and maximum factor and you can give comparatively. 

    return MaterialApp(
            builder: (context, child) {
              final mediaQueryData = MediaQuery.of(context);
              final scale = mediaQueryData.textScaleFactor.clamp(1.0, 1.3);
              return MediaQuery(
                child: child,
                data: MediaQuery.of(context).copyWith(textScaleFactor: scale),
              );
            },
    );

Instead of a hardcoded **textScaleFactor**, we can give a constrained system value.

By using **clamp()**, we're giving the system **textScaleFactor** a lower and upper bound.
