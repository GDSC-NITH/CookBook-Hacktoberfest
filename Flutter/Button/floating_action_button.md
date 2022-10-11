# Button

## **About Floating Action Button Widget**

[Click here to check in official docs of Flutter](https://docs.flutter.dev/development/ui/widgets/material)

A FAB button is a circular icon button that triggers the primary action in our application. It is the most used button in today's applications. We can use this button for **adding, refreshing, or sharing** the content. Flutter suggests using at most one FAB button per screen. There are two types of Floating Action Button:

FloatingActionButton: It creates a simple circular floating button with a child widget inside it. It must have a **child parameter** to display a widget.

FloatingActionButton.extended: It creates a wide floating button along with an icon and a label inside it. **Instead of a child, it uses labels and icon parameters**.

***

## **Floating Action Button Widget Constructor**

```Dart
FloatingActionButton({
  Key? key,
  Widget? child,
  String? tooltip,
  Color? foregroundColor,
  Color? backgroundColor,
  Color? focusColor,
  Color? hoverColor,
  Color? splashColor,
  Object? heroTag,
  double? elevation,
  double? focusElevation,
  double? hoverElevation,
  double? highlightElevation,
  double? disabledElevation,
  Function()? onPressed,
  MouseCursor? mouseCursor,
  bool mini,
  ShapeBorder? shape,
  Clip clipBehavior,
  FocusNode? focusNode,
  bool autofocus,
  MaterialTapTargetSize? materialTapTargetSize,
  bool isExtended, 
  bool? enableFeedback,
})
```

package:flutter/material.dart

***

## **Essential Properties of Floating Action Button Widget**

1. **Autofocus:** True if this widget will be selected as the initial focus when no other node in its scope is currently focused.

2. **Child:** Typically the button's label.

3. **ClipBehavior:** The content will be clipped (or not) according to this option.

4. **DisabledElevation:** The z-coordinate at which to place this button when the button is disabled (onPressed is null).

5. **Elevation:** The z-coordinate at which to place this button relative to its parent.

6. **EnableFeedback:** Whether detected gestures should provide acoustic and/or haptic feedback.

7. **ExtendedIconLabelSpacing:**The spacing between the icon and the label for an extended FloatingActionButton.

8. **ExtendedPadding:**The padding for an extended FloatingActionButton's content.

9. **ExtendedTextStyle:** The text style for an extended FloatingActionButton's label.

10. **FocusColor:** The color to use for filling the button when the button has input focus.

11. **FocusElevation:** The z-coordinate at which to place this button relative to its parent when the button has the input focus.

12. **FocusNode:** An optional focus node to use as the focus node for this widget.

13. **ForegroundColor:** The default foreground color for icons and text within the button.

14. **HashCode:** The hash code for this object.

15. **MouseCursor:** The cursor for a mouse pointer when it enters or is hovering over the button.

16. **OnPressed:** Called when the button is tapped or otherwise activated.

17. **RuntimeType:** A representation of the runtime type of the object.

18. **Tooltip:** Text that describes the action that will occur when the button is pressed.

***

## **Important points to be noted:**

* Use at most a single floating action button per screen. Floating action buttons should be used for positive actions such as **"create", "share", or "navigate"**.

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
  
void main() {  
  runApp(const MyApp());  
}  
  
class MyApp extends StatefulWidget {
  const MyApp({super.key});
  
  @override  
  // ignore: library_private_types_in_public_api
  _MyAppState createState() => _MyAppState();  
}  
  
class _MyAppState extends State<MyApp> {  
  @override  
  Widget build(BuildContext context) {  
    return MaterialApp(home: Scaffold(  
      appBar: AppBar(  
        title: const Text("FAB Button Example"),  
        backgroundColor: Colors.blue,  
        actions: <Widget>[  
          IconButton(icon: const Icon(Icons.camera_alt), onPressed: () => {}),  
          IconButton(icon: const Icon(Icons.account_circle), onPressed: () => {})  
        ],  
      ),  
      floatingActionButton: FloatingActionButton(  
        backgroundColor: Colors.green,  
        foregroundColor: Colors.white,  
        onPressed: () => {},  
        child: const Icon(Icons.navigation),  
      ),  
      /*floatingActionButton:FloatingActionButton.extended(  
        onPressed: () {},  
        icon: Icon(Icons.save),  
        label: Text("Save"),  
      ), */  
    ),  
    );  
  }  
}  
 
```

### **Output**

***
![Float Action Button Widget Output](https://static.javatpoint.com/tutorial/flutter/images/flutter-buttons5.png)

***

## **Resources:**

* [**JAVAPOINT**](https://www.javatpoint.com/flutter-buttons)
