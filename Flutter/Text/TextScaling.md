## How to make Flutter app font size independent from device settings?

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
