# Image
## **About Image Widget**

[Click here to check in official docs of Flutter](https://api.flutter.dev/flutter/widgets/Image-class.html)


An Image is a widget in Flutter that allows us to **display an image in the Application's Screen**. We can display the image from various Sources and in different formats such as JPEG, PNG, GIF,Animated GIF, WebP,Animated WebP, BMP,and WBMP.

<br>

***
<br>

## **Image Widget Constructor**
<br>

### The default constructor can be used with any ImageProvider, such as a NetworkImage, to display an image from the internet.


```Dart
const Image(
  image: NetworkImage('https://flutter.github.io/assets-for-api-docs/assets/widgets/owl.jpg'),
)
```

<br>

***
<br>

## **Some Essential Properties of Image Widget** 

<br>

1. **Alignment:** It is used to specify how our text is aligned within its bounds.

2. **Color:** It specifies the color blend and If non-null, this color is blended with each image pixel using colorBlendMode.

3. **Color Blend Mode:** This property is Used to combine color with this image.

4. **FilterQuality:** This property is Used to specify the rendering quality of the image.

5. **Fit:** It is used to determines How to inscribe the image into the space allocated during layout.

<br>

***
<br>

## **Types of Constructors we can use:**

<br>

### We have:

* **Image.new**

* **Image.asset**

* **Image.network**

* **Image.file**

* **Image.memory**
***
The Image.asset, Image.network, Image.file, and Image.memory constructors allow a custom decode size to be specified through cacheWidth and cacheHeight parameters. The engine will decode the image to the specified size, which is primarily intended to reduce the memory usage of ImageCache.
<br>

***
<br>


## **How to display the image in Flutter**

<br>

**Step 1**: First, we need to create a new folder inside the root of the Flutter project and named it assets. We can also give it any other name if you want.



**Step 2**: Next, inside this folder, add one image manually.

**Step 3**: Update the pubspec.yaml file. Suppose the image name is car.png, then pubspec.yaml file is:
```
assets:  
    - assets/car.png  
    
 ```  
If the assets folder contains more than one image, we can include it by specifying the directory name with the slash (/) character at the end.
```
flutter:  
 assets:  
    - assets/  
  ```
**Step 4**: Finally, open the main.dart file and insert the following code.
```dart
import 'package:flutter/material.dart';  
  
void main() => runApp(MyApp());  
  
class MyApp extends StatelessWidget {  
  @override  
  Widget build(BuildContext context) {  
    return MaterialApp(  
      home: Scaffold(  
        appBar: AppBar(  
            title: Text('Flutter Image Cookbook'),  
        ),  
        body: Center(  
          child: Column(  
            children: <Widget>[  
              Image.asset('assets/car.png'),  
              Text(  
                  'Enter any text associated with th image.'  
              ), 
            ],  
          ),  
        ),  
      ),  
    );  
  }  
} 
``` 
**Step 5**: Now, run the app. You will get something like the screen below.

![Failed to load](https://i.ibb.co/4dmbsR5/11-10-2022-01-44-21-REC.png)



## **Display Image From The Internet**
Displaying images from the internet or network is very simple. Flutter provides a built-in method Image.network to work with images from a URL. The Image.network method also allows you to use some optional properties, such as height, width, color, fit, and many more. We can use the following syntax to display an image from the internet.
```
Image.network(  
  'https://picsum.photos/250?image=9',  
)
```  
The Image.Network gives one useful thing that supports animated gifs. We can use the following syntax for displaying gifs from the internet.
```
Image.network(  
  'https://github.com/flutter/plugins/raw/master/packages/video_player/doc/demo_ipod.gif?raw=true',  
);  
```
Let us understand how to display an image from the network with the following example:

```
import 'package:flutter/material.dart';  
  
void main() => runApp(MyApp());  
  
class MyApp extends StatelessWidget {  
  @override  
  Widget build(BuildContext context) {  
    return MaterialApp(  
      home: Scaffold(  
        appBar: AppBar(  
            title: Text('Flutter Image Demo'),  
        ),  
        body: Center(  
          child: Column(  
            children: <Widget>[  
              Image.network(  
                  'https://static.javatpoint.com/tutorial/flutter/images/flutter-creating-android-platform-specific-code3.png',  
                  height: 400,  
                  width: 250  
              ),  
              Text(  
                  'It is an image displays from the given url.',  
                  style: TextStyle(fontSize: 20.0),  
              )  
            ],  
          ),  
        ),  
      ),  
    );  
  }  
} 
``` 
Output:

When you run the app in Android Emulator, the following screen appears. Here, you can see the image of the given url.

![Failed to load](https://i.ibb.co/JxhBmwY/11-10-2022-01-45-58-REC.png)

Sources: *https://www.javatpoint.com/flutter-images*

*https://docs.flutter.dev/*