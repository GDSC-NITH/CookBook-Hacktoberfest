# Button

## **About InkWell Button Widget**

[Click here to check in official docs of Flutter](https://docs.flutter.dev/development/ui/widgets/material)

InkWell button is a material design concept, which is used for touch response. This widget comes under the Material widget where the ink reactions are actually painted. It creates the app UI interactive by adding gesture feedback. It is mainly used for adding splash ripple effect.

## **Troubleshooting**

### The ink splashes aren't visible

If there is an opaque graphic, e.g. painted using a Container, Image, or DecoratedBox, between the Material widget and the InkWell widget, then the splash won't be visible because it will be under the opaque graphic. This is because ink splashes draw on the underlying Material itself, as if the ink was spreading inside the material.

The Ink widget can be used as a replacement for Image, Container, or DecoratedBox to ensure that the image or decoration also paints in the Material itself, below the ink.

If this is not possible for some reason, e.g. because you are using an opaque CustomPaint widget, alternatively consider using a second Material above the opaque widget but below the InkWell (as an ancestor to the ink well). The MaterialType.transparency material kind can be used for this purpose.

### Example

![TextButton Widget Output](https://i.stack.imgur.com/S4s8d.png)

### InkWell isn't clipping properly

If you want to clip an InkWell or any Ink widgets you need to keep in mind that the Material that the Ink will be printed on is responsible for clipping. This means you can't wrap the Ink widget in a clipping widget directly, since this will leave the Material not clipped (and by extension the printed Ink widgets as well).

An easy solution is to deliberately wrap the Ink widgets you want to clip in a Material, and wrap that in a clipping widget instead. See Ink for an example.

![Inkwell does not clip Output](https://user-images.githubusercontent.com/48603081/176392250-531ffed8-8495-446c-a425-75d068054c0b.png)

### The ink splashes don't track the size of an animated container

If the size of an InkWell's Material ancestor changes while the InkWell's splashes are expanding, you may notice that the splashes aren't clipped correctly. This can't be avoided.

![Inkwell donot track size Output](https://media.geeksforgeeks.org/wp-content/uploads/20210129140959/1-660x424.jpg)

***

## **InkWell Button Widget Constructor**

```Dart
InkWell({
    Key? key, 
    Widget? child, 
    GestureTapCallback? onTap, 
    GestureTapCallback? onDoubleTap, 
    GestureLongPressCallback? onLongPress, 
    GestureTapDownCallback? onTapDown, 
    GestureTapUpCallback? onTapUp, 
    GestureTapCallback? onTapCancel, 
    ValueChanged<bool>? onHighlightChanged, 
    ValueChanged<bool>? onHover, 
    MouseCursor? mouseCursor, 
    Color? focusColor, 
    Color? hoverColor, 
    Color? highlightColor, 
    MaterialStateProperty<Color?>? overlayColor, 
    Color? splashColor, 
    InteractiveInkFeatureFactory? splashFactory, 
    double? radius, 
    BorderRadius? borderRadius, 
    ShapeBorder? customBorder, 
    bool? enableFeedback = true, 
    bool excludeFromSemantics = false, 
    FocusNode? focusNode, 
    bool canRequestFocus = true, 
    ValueChanged<bool>? onFocusChange, 
    bool autofocus = false, 
    MaterialStatesController? statesController
    })
```

package:flutter/material.dart

***

## **Essential Properties Of InkWell Button Widget**

### **Autofocus:**

True if this widget will be selected as the initial focus when no other node in its scope is currently focused.

### **BorderRadius:**

The clipping radius of the containing rect. This is effective only if customBorder is null.

### **canRequestFocus:**

If true, this widget may request the primary focus.

### **child:**

The widget below this widget in the tree.

### **containedInkWell:**

Whether this ink response should be clipped its bounds.

### **customBorder:**

The custom clip border which overrides borderRadius.

### **EnableFeedback:**

Whether detected gestures should provide acoustic and/or haptic feedback.

### **FocusColor:**

The color of the ink response when the parent widget is focused. If this property is null then the focus color of the theme, ThemeData.focusColor, will be used.

### **FocusNode:**

An optional focus node to use as the focus node for this widget.

### **HashCode:**

The hash code for this object.

### **excludeFromSemantics:**

Whether to exclude the gestures introduced by this widget from the semantics tree.

### **highlightColor:**

The highlight color of the ink response when pressed. If this property is null then the highlight color of the theme, ThemeData.highlightColor, will be used.

### **highlightShape:**

The shape (e.g., circle, rectangle) to use for the highlight drawn around this part of the material when pressed, hovered over, or focused.

### **hoverColor:**

The color of the ink response when a pointer is hovering over it. If this property is null then the hover color of the theme, ThemeData.hoverColor, will be used.

### **key:**

Controls how one widget replaces another widget in the tree.

### **mouseCursor:**

The cursor for a mouse pointer when it enters or is hovering over the widget.

### **onDoubleTap:**

Called when the user double taps this part of the material.

### **onFocusChange:**

Handler called when the focus changes.

### **onHighlightChanged:**

Called when this part of the material either becomes highlighted or stops being highlighted.

### **onHover:**

Called when a pointer enters or exits the ink response area.

### **onLongPress:**

Called when the user long-presses on this part of the material.

### **onTap:**

Called when the user taps this part of the material.

### **OnTapCancle:**

Called when the user cancels a tap that was started on this part of the material.

### **onTapDown:**

Called when the user taps down this part of the material.

### **onTapUp:**

Called when the user releases a tap that was started on this part of the material. onTap is called immediately after.

### **overlayColor:**

Defines the ink response focus, hover, and splash colors.

### **Radius:**

The radius of the ink splash.

### **SplashColor:**

The splash color of the ink response. If this property is null then the splash color of the theme, ThemeData.splashColor, will be used.

### **RunTimeType:**

A representation of the runtime type of the object.

### **SplashFactory:**

Defines the appearance of the splash.

### **StatesController:**

Represents the interactive "state" of this widget in terms of a set of MaterialStates, like MaterialState.pressed and MaterialState.focused.

***

## **Essential Methods Of InkWell Button Widget**

### **build():**

Describes the part of the user interface represented by this widget.

### **createElement():**

Creates a StatelessElement to manage this widget's location in the tree.

### **debugCheckContext():**

Asserts that the given context satisfies the prerequisites for this class.

### **debugDescribeChildren():**

Returns a list of DiagnosticsNode objects describing this node's children.

### **debugFillProperties(DiagnosticPropertiesBuilder properties):**

Add additional properties associated with the node.

### **getRectCallback(RenderBox referenceBox):**

The rectangle to use for the highlight effect and for clipping the splash effects if containedInkWell is true.

### **noSuchMethod(Invocation invocation):**

Invoked when a non-existent method or property is accessed.

### **toDiagnosticsNode():**

Returns a debug representation of the object that is used by debugging tools and by DiagnosticsNode.toStringDeep.

### **toString():**

A string representation of this object.

### **toStringDeep():**

Returns a string representation of this node and its descendants.

### **toStringShallow():**

Returns a one-line detailed description of the object.

### **toStringShort():**

A short, textual description of this widget.

***

## **SAMPLE**

Open the main.dart file and replace it with the below code.

### **Code**

```Dart
import 'package:flutter/material.dart';  
  
void main() => runApp(MyApp());  
  
class MyApp extends StatefulWidget {  
  @override  
  _MyAppState createState() => _MyAppState();  
}  
  
class _MyAppState extends State<MyApp> {  
  int _volume = 0;  
  
  @override  
  Widget build(BuildContext context) {  
    return MaterialApp(  
      home: Scaffold(  
        appBar: AppBar(  
          title: Text('InkWell Button Example'),  
        ),  
        body: Center(  
          child: new Column(  
            mainAxisAlignment: MainAxisAlignment.center,  
            children: <Widget>[  
              InkWell(  
                splashColor: Colors.green,  
                highlightColor: Colors.blue,  
                child: Icon(Icons.ring_volume, size: 50),  
                onTap: () {  
                  setState(() {  
                    _volume += 2;  
                  });  
                },  
              ),  
              Text (  
                  _volume.toString(),  
                  style: TextStyle(fontSize: 50)  
              ),  
            ],  
          ),  
        ),  
      ),  
    );  
  }  
}  
 
```

### **Output**

Run the application in android emulator, and it will give the UI similar to the following screenshot. Every time we press the ring volume button, it will increase the volume by 2.

![InkWell Widget Output](https://static.javatpoint.com/tutorial/flutter/images/flutter-buttons9.png)

### Autofocus Example

![InkWell Widget](https://i.stack.imgur.com/QqEZ3.gif)
![Inkwell Button Output](https://miro.medium.com/max/1400/1*LAUBNX9bAIU9OEPt07x6Fg.png)
***

## **Resources:**

* [**JAVAPOINT**](https://www.javatpoint.com/flutter-buttons)
