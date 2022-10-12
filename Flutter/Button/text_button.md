# Button

## **About Text Button Widget**

[Click here to check in official docs of Flutter](https://docs.flutter.dev/development/ui/widgets/material)

It is a text label button that does not have much decoration and displayed without any elevation. The flat button has two required properties that are: **child and onPressed()**. It is mostly used in toolbars, dialogs, or inline with other content. By default, the flat button has no color, and its text is black. But, we can use color to the button and text using color and textColor attributes, respectively.

***

## **Text Button Widget Constructor**

```Dart
TextButton({
  Key? key, 
  VoidCallback? onPressed,
  VoidCallback? onLongPress, 
  ValueChanged<bool>? onHover, 
  ValueChanged<bool>? onFocusChange, 
  ButtonStyle? style, 
  FocusNode? focusNode, 
  bool autofocus = false, 
  Clip clipBehavior = Clip.none, 
  MaterialStatesController? statesController, 
  Widget child})
```

package:flutter/material.dart

***

## **Essential Properties of Text Button Widget**

1. **Autofocus:** True if this widget will be selected as the initial focus when no other node in its scope is currently focused.

2. **Child:** Typically the button's label.

3. **ClipBehavior:** The content will be clipped (or not) according to this option.

4. **Enabled:** Whether the button is enabled or disabled.

5. **FocusNode:** An optional focus node to use as the focus node for this widget.

6. **HashCode:** The hash code for this object.

7. **Key:** Controls how one widget replaces another widget in the tree.

8. **OnFocusChange:** Handler called when the focus changes.

9. **OnHover:** Called when a pointer enters or exits the button response area.

10. **OnLongPress:** Called when the button is long-pressed.

11. **OnPressed:** Called when the button is tapped or otherwise activated.

12. **RuntimeType:** A representation of the runtime type of the object.

13. **StatesController:** Represents the interactive "state" of this widget in terms of a set of MaterialStates, like MaterialState.pressed and MaterialState.focused.

14. **Style:** Customizes this button's appearance.

***

## **Important points to be noted:**

* The static styleFrom method is a convenient way to create a text button **ButtonStyle** from simple values.

* If the **onPressed** and **onLongPress** callbacks are null, then this button will be disabled, it will not react to touch.

***

## **TextStyle**

  | Attributes | Descriptions |
  | ---------- | ------------ |
  | color      | It is used to determine the color of the text.
  | backgroundColor| It is used to determine the background color of the text.
  | fontSize   | It determines the size of the text.
  | fontWeight | It determines the thickness of the text.
  | fontStyle  | It is used to style the font either in bold or italic form.
  | letterSpacing | It is used to determine the distance between the characters of the text.
  | wordSpacing | It is used to specify the distance between two words of the text.
  | foreground | It determines the paint as a foreground for the text.
  | background | It determines the paint as a background for the text.
  | shadows | It is used to paint underneath the text.
  | decoration | We use this to decorate text using the three parameters: decoration, decorationColor, decorationStyle. The decoration determines the location, decorationColor specify the color, decorationStyle determine the shape.
  | fontFamily | It is used to specify the typeface for the font. For this, we need to download a typeface file in our project, and then keep this file into the assets/font folder. Finally, config the pubspec.yaml file to use it in the project.

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
    return MaterialApp(
      home: Scaffold(
          appBar: AppBar(
            title: const Text('Flutter TextButton Example'),
          ),
          body: Center(
              child: Column(children: <Widget>[
            Container(
              margin: const EdgeInsets.all(25),
              child: TextButton(
                child: const Text(
                  'SignUp',
                  style: TextStyle(fontSize: 20.0),
                ),
                onPressed: () {},
              ),
            ),
            Container(
              margin: const EdgeInsets.all(25),
              child: TextButton(
                child: const Text(
                  'LogIn',
                  style: TextStyle(fontSize: 20.0),
                ),
                onPressed: () {},
              ),
            ),
          ]))),
    );
  }
}
 
```

### **Output**

***

![Text Button Widget Output](https://static.javatpoint.com/tutorial/flutter/images/flutter-buttons.png)

***

## **Resources:**

* [**JAVAPOINT**](https://www.javatpoint.com/flutter-buttons)
