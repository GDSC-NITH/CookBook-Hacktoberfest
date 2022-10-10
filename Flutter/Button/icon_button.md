# Button

## **About Icon Button Widget**

[Click here to check in official docs of Flutter](https://docs.flutter.dev/development/ui/widgets/material)

An IconButton is a picture printed on the Material widget. It is a useful widget that gives the Flutter UI a material design feel. We can also customize the look and feel of this button. In simple terms, it is an icon that reacts when the user will touch it.

***

## **Icon Button Widget Constructor**

```Dart
(new) IconButton IconButton({
  Key? key,
  double? iconSize,
  VisualDensity? visualDensity,
  EdgeInsetsGeometry? padding,
  AlignmentGeometry? alignment,
  double? splashRadius,
  Color? color,
  Color? focusColor,
  Color? hoverColor,
  Color? highlightColor,
  Color? splashColor,
  Color? disabledColor,
  Function()? onPressed,
  MouseCursor? mouseCursor,
  FocusNode? focusNode,
  bool autofocus,
  String? tooltip,
  bool? enableFeedback,
  BoxConstraints? constraints,
  ButtonStyle? style,
  bool? isSelected,
  Widget? selectedIcon,
  Widget icon,
})
```

package:flutter/material.dart

***

## **Essential Properties Of Icon Button Widget**

**Alignment:**
Defines how the icon is positioned within the IconButton.

**Autofocus:**
True if this widget will be selected as the initial focus when no other node in its scope is currently focused.

**Color:**
The color to use for the icon inside the button, if the icon is enabled. Defaults to leaving this up to the icon widget.

**Constraints:**
Optional size constraints for the button.

**DisabledColor:**
The color to use for the icon inside the button, if the icon is disabled. Defaults to the ThemeData.disabledColor of the current Theme.

**EnableFeedback:**
Whether detected gestures should provide acoustic and/or haptic feedback.

**FocusColor:**
The color for the button when it has the input focus.

**FocusNode:**
An optional focus node to use as the focus node for this widget.

**HashCode:**
The hash code for this object.

**HighlightColor:**
The secondary color of the button when the button is in the down (pressed) state. The highlight color is represented as a solid color that is overlaid over the button color (if any). If the highlight color has transparency, the button color will show through. The highlight fades in quickly as the button is held down.

**HoverColor:**
The color for the button when a pointer is hovering over it.

**Icon:**
The icon to display inside the button.

**IconSize:**
The size of the icon inside the button.

**IsSelected:** → bool?
The optional selection state of the icon button.

**MouseCursor:**
The cursor for a mouse pointer when it enters or is hovering over the button.

**OnPressed:**
The callback that is called when the button is tapped or otherwise activated.

**Padding:**
The padding around the button's icon. The entire padded icon will react to input gestures.

**RuntimeType:**
A representation of the runtime type of the object.

**SelectedIcon:**
The icon to display inside the button when isSelected is true. This property can be null. The original icon will be used for both selected and unselected status if it is null.

**SplashRadius:**
The splash radius.

**Style:**
Customizes this button's appearance.

**Tooltip:**
Text that describes the action that will occur when the button is pressed.

**VisualDensity:**
Defines how compact the icon button's layout will be.

***

## **Important points to be noted:**

* The hit region of an icon button will, if possible, be at least **kMinInteractiveDimension** pixels in size, regardless of the actual iconSize, to satisfy the touch target size requirements in the Material Design specification. The alignment controls how the icon itself is positioned within the hit region.

* If the onPressed callback is **null**, then the button will be disabled and will not react to touch.

***

## **IconButton**

  | Attributes | Descriptions |
  | ---------- | ------------ |
  | iconSize   | Icons occupy a square with width and height equal to size
  | visualDensity | Defines the visual density of user interface components
  | padding    | The amount of space by which to inset the child.
  | alignment  | Defines how the icon is positioned within the IconButton
  | splashRadius | The radius of the splash
  | color      | It is used to determine the color of the text.
  | focusColor | The color to use for filling the button when the button has input focus.
  | hoverColor | The color to use for filling the button when the button has a pointer hovering over it.
  | highlightColor | It is used to determine the color of the text.
  | splashColor | It is used to determine the color of the text.
  | disabledColor | The color to use when the button has been disabled.
  | onPressed  | It is used to determine the action to be performed when the button is pressed.
  | mouseCursor | The cursor for a mouse pointer when it enters or is hovering over the button.
  | focusNode  | It is used to determine the focus of the text.
  | autofocus  | True if this widget will be selected as the initial focus when no other node in its scope is currently focused.
  | tooltip    | It is used to display a message when the user long-presses the button.
  | enableFeedback | Whether detected gestures should provide acoustic and/or haptic feedback.
  | constraints | It is used to determine the constraints of the text.
  | style      | It is used to determine the style of the text.
  | isSelected | Whether this button is in an active, on state.
  | selectedIconTheme, | The icon theme to use for the icon when the button is selected.
  | icon       | The icon to display inside the button.

***

## **SAMPLE**

### **Code**

```Dart
import 'package:flutter/material.dart';  
  
void main() => runApp(const MyApp());  
  
class MyApp extends StatelessWidget {
  const MyApp({super.key});
  
  @override  
  Widget build(BuildContext context) {  
    return MaterialApp(  
      home: Scaffold(  
        appBar: AppBar(  
          title: const Text("Icon Button Example"),  
        ),  
        body: const Center(  
          child: MyStatefulWidget(),  
        ),  
      ),  
    );  
  }  
}  
double _speakervolume = 0.0;  

class MyStatefulWidget extends StatefulWidget {  
  const MyStatefulWidget({super.key});  
  
  @override  
  // ignore: library_private_types_in_public_api
  _MyStatefulWidgetState createState() => _MyStatefulWidgetState();  
}  
  
class _MyStatefulWidgetState extends State<MyStatefulWidget> {  
  @override
  Widget build(BuildContext context) {  
    return Column(  
      mainAxisSize: MainAxisSize.min,  
      children: <Widget>[  
        IconButton(  
          icon: const Icon(Icons.volume_up),  
          iconSize: 50,  
          color: Colors.brown,  
          tooltip: 'Increase volume by 5',  
          onPressed: () {  
            setState(() {  
              _speakervolume += 5;  
            });  
          },  
        ),  
        Text('Speaker Volume: $_speakervolume')  
      ],  
    );  
  }  
}  
 
```

### **Output**

***
![Icon Button Widget Output](https://static.javatpoint.com/tutorial/flutter/images/flutter-buttons8.png)

***

## **Resources:**

* [**JAVAPOINT**](https://www.javatpoint.com/flutter-buttons)
