# Text

## **About Text Widget**

[Click here to check in official docs of Flutter](https://docs.flutter.dev/development/ui/widgets/text)

A Text is a widget in Flutter that allows us to **display a string of text with a single line in our application**. Depending on the layout constraints, we can break the string across multiple lines or might all be displayed on the same line. If we do not specify any styling to the text widget, it will use the closest **DefaultTextStyle** class style. This class does not have any explicit style. In this article, we are going to learn how to use a Text widget and how to style it in our application.

***

## **Text Widget Constructor**

```Dart
Text Text(
  String data, {
  Key? key,
  TextStyle? style,
  StrutStyle? strutStyle,
  TextAlign? textAlign,
  TextDirection? textDirection,
  Locale? locale,
  bool? softWrap,
  TextOverflow? overflow,
  double? textScaleFactor,
  int? maxLines,
  String? semanticsLabel,
  TextWidthBasis? textWidthBasis,
  TextHeightBehavior? textHeightBehavior,
  Color? selectionColor,
})
```

package:flutter/src/widgets/text.dart

***

## **Essential Properties of Text Widget**

1. **TextAlign:** It is used to specify how our text is aligned horizontally. It also controls the text location.

2. **TextDirection:** It is used to determine how textAlign values control the layout of our text. Usually, we write text from left to right, but we can change it using this parameter.

3. **Overflow:** It is used to determine when the text will not fit in the available space. It means we have specified more text than the available space.

4. **TextScaleFactor:** It is used to determine the scaling to the text displayed by the Text widget. Suppose we have specified the text scale factor as 1.5, then our text will be 50 percent larger than the specified font size.

5. **SoftWrap:** It is used to determine whether or not to show all text widget content when there is not enough space available. If it is true, it will show all content. Otherwise, it will not show all content.

6. **MaxLines:** It is used to determine the maximum number of lines displayed in the text widget.

7. **TextWidthBasis:** It is used to control how the text width is defined.

8. **TextHeightBehavior:** It is used to control how the paragraph appears between the first line and descent of the last line.

9. **Style:** It is the most common property of this widget that allows developers to styling their text. It can do styling by specifying the foreground and background color, font size, font weight, letter and word spacing, locale, shadows, etc.

***

## **Important points to be noted:**

* If the **style** argument is null, the text will use the style from the closest enclosing **DefaultTextStyle**.

* The **data** parameter must not be **null**.

* The **overflow** property's behavior is affected by the **softWrap** argument. If the **softWrap** is true or null, the glyph causing overflow, and those that follow, will not be rendered. Otherwise, it will be shown with the given overflow option.

***

## **TextStyle**

| Attributes | Descriptions |
| ---------- | ------------ |
| foreground | It determines the paint as a foreground for the text. |
| background | It determines the paint as a background for the text.
| fontWeight | It determines the thickness of the text.
| fontSize | It determines the size of the text.
| fontFamily | It is used to specify the typeface for the font. For this, we need to download a typeface file in our project, and then keep this file into the assets/font folder. Finally, config the pubspec.yaml file to use it in the project.
| fontStyle | It is used to style the font either in bold or italic form.
| Color | It is used to determine the color of the text.
| letterSpacing | It is used to determine the distance between the characters of the text.
| wordSpacing | It is used to specify the distance between two words of the text.
| shadows | It is used to paint underneath the text.
| decoration | We use this to decorate text using the three parameters: decoration, decorationColor, decorationStyle. The decoration determines the location, decorationColor specify the color, decorationStyle determine the shape.

***

## **SAMPLE**

### **Code**

```Dart
import 'package:flutter/material.dart';  
  
void main() { runApp(MyApp()); }  
  
class MyApp extends StatelessWidget {  
  @override  
  Widget build(BuildContext context) {  
    return MaterialApp(  
        theme: ThemeData(  
          primarySwatch: Colors.green,  
        ),  
        home: MyTextPage()  
    );  
  }  
}  
class MyTextPage extends StatelessWidget {  
  @override  
  Widget build(BuildContext context) {  
    return Scaffold(  
      appBar: AppBar(  
          title:Text("Text Widget Example")  
      ),  
      body: Center(  
          child:Text(  
            "Hello World! This is a Text Widget.",  
            style: TextStyle(  
              fontSize: 35,  
              color: Colors.purple,  
              fontWeight: FontWeight.w700,  
              fontStyle: FontStyle.italic,  
              letterSpacing: 8,  
              wordSpacing: 20,  
              backgroundColor: Colors.yellow,  
              shadows: [  
                Shadow(color: Colors.blueAccent, offset: Offset(2,1), blurRadius:10)  
              ]  
            ),  
          )  
      ),  
    );  
  }  
}  
```

### **Output**

***
![Text Widget Output](https://static.javatpoint.com/tutorial/flutter/images/flutter-text2.png)

***

## **Resources:**

* [**JAVAPOINT**](https://www.javatpoint.com/flutter-text)
