# Curved Navigation Bar
A material widget that's displayed at the bottom of an app for selecting among a small number of views, typically between three and five.

The Curved navigation bar consists of multiple items in the form of text labels, icons, or both, laid out on top of a piece of material. It provides quick navigation between the top-level views of an app.


## Installation

#### Use this package as a library
Depend on it

Run this command:

With Flutter:
```bash
 $ flutter pub add curved_navigation_bar
 ```
This will add a line like this to your package's pubspec.yaml (and run an implicit flutter pub get):
```bash
dependencies:
  curved_navigation_bar: ^1.0.3
```
Or just write this in pubspec.yaml and run pub get in your terminal or click on the pub get shown by your editor.

To import in your Dart code, you can use:
```bash
import 'package:curved_navigation_bar/curved_navigation_bar.dart';
```
    
## Sample code

```dart
import 'package:flutter/material.dart';
import 'package:curved_navigation_bar/curved_navigation_bar.dart';

void main() => runApp(MaterialApp(home: BottomNavBar()));

class BottomNavBar extends StatefulWidget {
  @override
  _BottomNavBarState createState() => _BottomNavBarState();
}

class _BottomNavBarState extends State<BottomNavBar> {
  int _page = 0;
  GlobalKey<CurvedNavigationBarState> _bottomNavigationKey = GlobalKey();

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.blueAccent,
      bottomNavigationBar: CurvedNavigationBar(
        key: _bottomNavigationKey,
        index: 2,
        height: 60.0,
        items: <Widget>[
          Icon(Icons.add, size: 30),
          Icon(Icons.list, size: 30),
          Icon(Icons.compare_arrows, size: 30),
          Icon(Icons.call_split, size: 30),
          Icon(Icons.perm_identity, size: 30),
        ],
        color: Colors.white,
        buttonBackgroundColor: Colors.white,
        backgroundColor: Colors.blueAccent,
        animationCurve: Curves.easeInOut,
        animationDuration: Duration(milliseconds: 300),
        onTap: (index) {
          setState(() {
            _page = index;
          });
        },
        letIndexChange: (index) => true,
      ),
    );
  }
}
```
## Attributes
1. **items**: List of Widgets
2. **index**: index of NavigationBar, can be used to change current index or to set initial index
3. **color**: Color of NavigationBar
4. **buttonBackgroundColor**: background color of floating button, default same as color attribute
5. **backgroundColor**: Color of NavigationBar's background
6. **onTap**: Function handling taps on items
7. **animationCurve**: Curves interpolating button change animation, default Curves.easeOutCubic
8. **animationDuration**: Duration of button change animation
9. **height**: Height of NavigationBar (min 0.0, max 75.0)
10. **letIndexChange**: Function which takes page index as argument and returns bool. If function returns false then page is not changed on button tap. It returns true by default\

## Note
1. Default Color of Navigation Bar is `Colors.white`
2. Default Color of Navigation Bar Background is `Colors.blueAccent`
3. Default Duration of Button Change animation is 600 milliseconds
4. Default value of letIndexChange is true

## Deployment :

To deploy your project run:

```bash
$ flutter run
``` 
or Use button provided by your Editor

## 

## Result

![App Screenshot](https://github.com/gitsak12/LetsLearnGit/blob/d11b1099bdf1970d809e19a44840d88bb663a59d/hack1_reduced.jpeg?raw=true)

## Source

[PubDev](https://pub.dev/packages/curved_navigation_bar)
