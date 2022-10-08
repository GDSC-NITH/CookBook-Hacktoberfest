# Button

## **About DropDown Button Widget**

[Click here to check in official docs of Flutter](https://docs.flutter.dev/development/ui/widgets/material)

A drop-down button is used to create a nice overlay on the screen that allows the user to select any item from multiple options. Flutter allows a simple way to implement a drop-down box or drop-down button. This button shows the currently selected item and an arrow that opens a menu to select an item from multiple options.

Flutter provides a DropdownButton widget to implement a drop-down list. We can place it anywhere in our app.

***

## **DropDown Button Widget Constructor**

```Dart
(new) DropdownButton<ListItem> DropdownButton({
  Key? key,
  required List<DropdownMenuItem<ListItem>>? items,
  List<Widget> Function(BuildContext)? selectedItemBuilder,
  ListItem? value,
  Widget? hint,
  Widget? disabledHint,
  required void Function(ListItem?)? onChanged,
  void Function()? onTap,
  int elevation = 8,
  TextStyle? style,
  Widget? underline,
  Widget? icon,
  Color? iconDisabledColor,
  Color? iconEnabledColor,
  double iconSize = 24.0,
  bool isDense = false,
  bool isExpanded = false,
  double? itemHeight = kMinInteractiveDimension,
  Color? focusColor,
  FocusNode? focusNode,
  bool autofocus = false,
  Color? dropdownColor,
  double? menuMaxHeight,
  bool? enableFeedback,
  AlignmentGeometry alignment = AlignmentDirectional.centerStart,
  BorderRadius? borderRadius,
})
```

package:flutter/material.dart

***

## **Essential Properties Of DropDown Button Widget**

**Alignment:** Defines how the icon is positioned within the DropdownButton.

**Autofocus:** True if this widget will be selected as the initial focus when no other node in its scope is currently focused.

**BorderRadius:** Defines the border radius of the DropdownButton.

**DisabledHint:** The widget to display when the DropdownButton is disabled.

**DropdownColor:** The color of the dropdown menu.

**Elevation:** The z-coordinate at which to place this button relative to its parent.

**EnableFeedback:** True if the button should play a sound when pressed.

**FocusColor:** The color of the button's [Material] when it has the input focus.

**FocusNode:** The focus node for this button.

**HashCode:** A hash code for this object.

**Hint:** The widget to display when no item is selected.

**Icon:** The icon to display for the DropdownButton.

**IconDisabledColor:** The color to use for the icon when the button is disabled.

**IconEnabledColor:** The color to use for the icon when the button is enabled.

**IconSize:** The size of the icon in logical pixels.

**IsDense:** Whether the button's label is rendered with less vertical padding.

**IsExpanded:** Whether the button expands to fill the available width.

**ItemHeight:** The height of each menu item.

**Items:** The menu items to show when the button is pressed.

**Key:** A widget that can be used to identify this widget in tests.

**MenuMaxHeight:** The maximum height of the menu when it is open.

**OnChanged:** Called when the user selects an item.

**OnTap:** Called when the button is tapped or otherwise activated.

**RuntimeType:** The runtime type of this object.

**SelectedItemBuilder:** A builder that builds the selected item's widget.

**Style:** The style to use for the text of the button's label.

**Underline:** The widget to display below the button.

**Value:** The currently selected value for this button.

***

## **Important points to be noted:**

* The onChanged callback should update a state variable that defines the dropdown's value. It should also call **State.setState** to rebuild the dropdown with the new value.

***

## **DropDown Button**

  | Attributes | Descriptions |
  | ---------- | ------------ |
  | items | The list of items the user can select. |
  | selectedItemBuilder | A builder to customize the dropdown buttons corresponding to the DropdownMenuItems in items. |
  | value | The value of the currently selected DropdownMenuItem. |
  | hint | A placeholder widget that is displayed by the dropdown button. |
  | disabledHint | A preferred placeholder widget that is displayed when the dropdown is disabled. |
  | onChanged | Called when the user selects an item. |
  | onTap | Called when the dropdown button is tapped. |
  | elevation | The z-coordinate at which to place the menu when open. |
  | style | The text style to use for text in the dropdown button and the dropdown menu that appears when you tap the button. |
  | underline | The widget to use for drawing the drop-down button's underline. |
  | icon | The widget to use for the drop-down button's icon. |
  | iconDisabledColor   | The color of any Icon descendant of icon if this button is disabled, i.e. if onChanged is null. |
  | iconEnabledColor | The color of any Icon descendant of icon if this button is enabled, i.e. if onChanged is defined. |
  | iconSize | The size to use for the drop-down button's down arrow icon button. |
  | isDense | Reduce the button's height. |
  | isExpanded | Set the dropdown's inner contents to horizontally fill its parent. |
  | itemHeight = kMinInteractiveDimension | If null, then the menu item heights will vary according to each menu item's intrinsic height. |
  | focusColor | The color for the button's Material when it has the input focus. |
  | focusNode | An optional focus node to use as the focus node for this widget. |
  | autofocus | True if this widget will be selected as the initial focus when no other node in its scope is currently focused. |
  | dropdownColor  | The background color of the dropdown. |
  | menuMaxHeight | The maximum height of the menu. |
  | enableFeedback | Whether detected gestures should provide acoustic and/or haptic feedback. |
  | alignment = AlignmentDirectional.centerStart | Defines how the hint or the selected item is positioned within the button. |
  | borderRadius | Defines the corner radii of the menu's rounded rectangle shape. |

***

## **SAMPLE**

### **Code**

```Dart
import 'package:flutter/material.dart';  
  
void main() => runApp(MaterialApp(  
  home: MyApp(),  
));  
  
class MyApp extends StatefulWidget {  
  @override  
  _MyAppState createState() => _MyAppState();  
}  
  
class _MyAppState extends State<MyApp> {  
  final List<ListItem> _dropdownItems = [  
    ListItem(1, "GeeksforGeeks"),  
    ListItem(2, "Javatpoint"),  
    ListItem(3, "tutorialandexample"),  
    ListItem(4, "guru99")  
  ];  
  
  late List<DropdownMenuItem<ListItem>> _dropdownMenuItems;  
  late ListItem _itemSelected;  
  
  void initState() {  
    super.initState();  
    _dropdownMenuItems = buildDropDownMenuItems(_dropdownItems);  
    _itemSelected = _dropdownMenuItems[1].value!;  
  }  
  
  List<DropdownMenuItem<ListItem>> buildDropDownMenuItems(List listItems) {  
    List<DropdownMenuItem<ListItem>> items = [];  
    for (ListItem listItem in listItems) {  
      items.add(  
        DropdownMenuItem(  
          value: listItem,  
          child: Text(listItem.name),  
        ),  
      );  
    }  
    return items;  
  }  
  
  @override  
  Widget build(BuildContext context) {  
    return Scaffold(  
      appBar: AppBar(  
        title: const Text("DropDown Button Example"),  
      ),  
      body: Column(  
        children: <Widget>[  
          Padding(  
            padding: const EdgeInsets.all(10.0),  
            child: Container(  
              padding: const EdgeInsets.all(5.0),  
              decoration: BoxDecoration(  
                  color: Colors.greenAccent,  
                  border: Border.all()),  
              child: DropdownButtonHideUnderline(  
                child: DropdownButton(  
                    value: _itemSelected,  
                    items: _dropdownMenuItems,  
                    onChanged: (value) {  
                      setState(() {  
                        _itemSelected = value!;  
                      });  
                    }),  
              ),  
            ),  
          ),  
          Text("We have selected ${_itemSelected.name}"),  
        ],  
      ),  
    );  
  }  
}  
  
class ListItem {  
  int value;  
  String name;  
  
  ListItem(this.value, this.name);  
}  
 
```

### **Output**

***
![DropDown Button Widget Output](https://static.javatpoint.com/tutorial/flutter/images/flutter-buttons6.png)
![DropDown Button Widget Output](https://static.javatpoint.com/tutorial/flutter/images/flutter-buttons7.png)

***

## **Resources:**

* [**JAVAPOINT**](https://www.javatpoint.com/flutter-buttons)
