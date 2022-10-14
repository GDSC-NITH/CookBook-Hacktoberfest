# Button

## **About PopupMenu Button Widget**

[Click here to check in official docs of Flutter](https://docs.flutter.dev/development/ui/widgets/material)

It is a button that displays the menu when it is pressed and then calls the onSelected method the menu is dismissed. It is because the item from the multiple options is selected. This button contains a text and an image. It will mainly use with Settings menu to list all options. It helps in making a great user experience.

Displays a menu when pressed and calls onSelected when the menu is dismissed because an item was selected. The value passed to onSelected is the value of the selected menu item.

One of child or icon may be provided, but not both. If icon is provided, then PopupMenuButton behaves like an IconButton.

If both are null, then a standard overflow icon is created (depending on the platform).

![PopUp Menu Widget Output](https://miro.medium.com/max/1400/0*gKDtVyHyd4YsUdME)

## **PopUp-Menu Button Widget Constructor**

```Dart
PopupMenuButton({
    Key? key, 
    required PopupMenuItemBuilder<T> itemBuilder, 
    T? initialValue, 
    PopupMenuItemSelected<T>? onSelected, 
    PopupMenuCanceled? onCanceled, 
    String? tooltip, 
    double? elevation, 
    EdgeInsetsGeometry padding = const EdgeInsets.all(8.0), 
    Widget? child, 
    double? splashRadius, 
    Widget? icon, 
    double? iconSize, 
    Offset offset = Offset.zero, 
    bool enabled = true, 
    ShapeBorder? shape, 
    Color? color, 
    bool? enableFeedback, 
    BoxConstraints? constraints, 
    PopupMenuPosition position = PopupMenuPosition.over
    })
```

package:flutter/material.dart

***

## **Essential Properties Of Popup Menu Button Widget**

### **child:**

If provided, child is the widget used for this button and the button will utilize an InkWell for taps.

### **color:**

If provided, the background color used for the menu.

### **constraints:**

Optional size constraints for the menu.

### **elevation:**

The z-coordinate at which to place the menu when open. This controls the size of the shadow below the menu.

### **enabled:**

Whether this popup menu button is interactive.

### **enableFeedback:**

Whether detected gestures should provide acoustic and/or haptic feedback.

### **hashCode:**

The hash code for this object.

### **icon:**

If provided, the icon is used for this button and the button will behave like an IconButton.

### **iconSize:**

If provided, the size of the Icon.

### **initialValue:**

The value of the menu item, if any, that should be highlighted when the menu opens.

### **itemBuilder:**

Called when the button is pressed to create the items to show in the menu.

### **key:**

Controls how one widget replaces another widget in the tree.

### **offset:**

The offset is applied relative to the initial position set by the position.

### **onCanceled:**

Called when the user dismisses the popup menu without selecting an item.

### **onSelected:**

Called when the user selects a value from the popup menu created by this button.

### **padding:**

Matches IconButton's 8 dps padding by default. In some cases, notably where this button appears as the trailing element of a list item, it's useful to be able to set the padding to zero.

### **position:**

Whether the popup menu is positioned over or under the popup menu button.

### **runtime Type:**

A representation of the runtime type of the object.

### **shape:**

If provided, the shape used for the menu.

### **splashRadius:**

The splash radius.

### **tooltip:**

Text that describes the action that will occur when the button is pressed.

***

## **Essential Methods Of Popup Menu Button Widget**

### **createElement():**

Creates a StatefulElement to manage this widget's location in the tree.

### **createState():**

Creates the mutable state for this widget at a given location in the tree.

### **debugDescribeChildren():**

Returns a list of DiagnosticsNode objects describing this node's children.

### **debugFillProperties():**

Add additional properties associated with the node.

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
  
void main() { runApp(MyApp());}  
  
class MyApp extends StatefulWidget {  
  @override  
  _MyAppState createState() => _MyAppState();  
}  
  
class _MyAppState extends State<MyApp> {  
  Choice _selectedOption = choices[0];  
  
  void _select(Choice choice) {  
    setState(() {  
      _selectedOption = choice;  
    });  
  }  
  @override  
  Widget build(BuildContext context) {  
    return MaterialApp(  
      home: Scaffold(  
        appBar: AppBar(  
          title: const Text('PopupMenu Button Example'),  
          actions: <Widget>[  
            PopupMenuButton<Choice>(  
              onSelected: _select,  
              itemBuilder: (BuildContext context) {  
                return choices.skip(0).map((Choice choice) {  
                  return PopupMenuItem<Choice>(  
                    value: choice,  
                    child: Text(choice.name),  
                  );  
                }).toList();  
              },  
            ),  
          ],  
        ),  
        body: Padding(  
          padding: const EdgeInsets.all(10.0),  
          child: ChoiceCard(choice: _selectedOption),  
        ),  
      ),  
    );  
  }  
}  
  
class Choice {  
  const Choice({this.name, this.icon});  
  final String name;  
  final IconData icon;  
}  
  
const List<Choice> choices = const <Choice>[  
  const Choice(name: 'Wi-Fi', icon: Icons.wifi),  
  const Choice(name: 'Bluetooth', icon: Icons.bluetooth),  
  const Choice(name: 'Battery', icon: Icons.battery_alert),  
  const Choice(name: 'Storage', icon: Icons.storage),  
];  
  
class ChoiceCard extends StatelessWidget {  
  const ChoiceCard({Key key, this.choice}) : super(key: key);  
  
  final Choice choice;  
  
  @override  
  Widget build(BuildContext context) {  
    final TextStyle textStyle = Theme.of(context).textTheme.headline;  
    return Card(  
      color: Colors.greenAccent,  
      child: Center(  
        child: Column(  
          mainAxisSize: MainAxisSize.min,  
          crossAxisAlignment: CrossAxisAlignment.center,  
          children: <Widget>[  
            Icon(choice.icon, size: 115.0, color: textStyle.color),  
            Text(choice.name, style: textStyle),  
          ],  
        ),  
      ),  
    );  
  }  
}  
 
```

### **Output**

Run the application in android emulator, and it will give the UI similar to the following screenshot. When we click the three dots shown at the top left corner of the screen, it will pop up the multiple options. Here, we can select any option, and it will keep it in the card, as shown in the second image.

![PopUp Menu Widget Output](https://static.javatpoint.com/tutorial/flutter/images/flutter-buttons10.png)
![PopUp Menu Widget Output](https://static.javatpoint.com/tutorial/flutter/images/flutter-buttons11.png)

***

## **Resources:**

* [**JAVAPOINT**](https://www.javatpoint.com/flutter-buttons)
