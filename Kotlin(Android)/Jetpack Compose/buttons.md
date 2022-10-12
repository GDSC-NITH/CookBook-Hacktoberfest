
# Buttons in Jetpack Compose

The Button is a composable component that communicates what action occurs when the user touches it. It contains the text function (used to declare the text displayed on the button), onClick function (used to handle click events on the button) and style function (used to handle the style of the button) attributes.
A button consists of text or an icon (or both text and an icon).

## #Simple Button

### Code

```Kotlin
@Composable
fun simpleButton() {
    Button(
    onClick = { //code for onclick action}
    ){
        Text(text = "Contribute")
    }
}
```

### Output

![App Screenshot](https://user-images.githubusercontent.com/98453503/194627540-a0604d5a-2955-4b71-b12f-c4bad6440eb3.png)

## #Outlined Button

It is used to insert button having outlines.

### Code

```Kotlin
@Composable
fun outlinedButton() {
    OutlinedButton(
    onClick = { //code for onclick action},
    border = BorderStroke(1.dp, Color.Magenta)//specify required color of outline using this
    ){
        Text(text = "Contribute")
    }
}
```

### Output

![App Screenshot](https://user-images.githubusercontent.com/98453503/194628431-a47f2df6-c637-410e-929a-f381fc06c2c6.png)

## #Text Button

It displays only text without any background or border.

### Code

```Kotlin
@Composable
fun textButton() {
    TextButton(
    onClick = { //code for onclick action}
    ){
        Text(text = "Contribute")
    }
}
```

### Output

![App Screenshot](https://user-images.githubusercontent.com/98453503/194632432-157b2035-63ef-42b7-881d-1eee6084dac9.png)

## #Floating Action Button

A floating action button (FAB) is a circular button that triggers the primary action in your app's UI.

### Code

```Kotlin
@Composable
fun floatingAcionButton() {
    FloatingActionButton(
    onClick = { //code for onclick action}
    ){
        Text(text = "+")
    }
}
```

### Output

![App Screenshot](https://user-images.githubusercontent.com/98453503/194691774-ab9fa554-d73b-49c2-afdf-ed1dba487d6d.png)

## #Button with elevation

By default, TextButton has no elevation. The Button widget has an elevation but we can change its elevation value.

### Code

```Kotlin
@Composable
fun buttonWithElevation() {
    TextButton(
    onClick = { //code for onclick action}
    ){
        Text(text = "Contribute")
    }
}
```

### Output

![App Screenshot](https://user-images.githubusercontent.com/98453503/194691738-6a7a6a98-4e76-41ec-9d95-2e0866510563.png)

## #Button with icon

We can insert a button containing icon and text. By default, the button arranges its elements horizontally.

### Code

```Kotlin
@Composable
fun buttonWithIcon() {
     Button(onClick = {}) {
                Image(
                    painterResource(id = R.drawable.github),
                    contentDescription = "github",
                    modifier = Modifier.size(20.dp)
                )

                Text(text = "Contribute", Modifier.padding(start = 10.dp))
            }
}
```

### Output

![App Screenshot](https://user-images.githubusercontent.com/98453503/194692415-30975a04-10f7-4d8d-bcbe-945d875e74b7.png)

## #Button of desired shape

We can insert buttons of desired shape using shape property.

### Rectangular Button

### Code

```Kotlin
@Composable
fun rectangularButton() {
       Button(onClick = { }, 
       shape = RectangleShape //shape property is used to define shape of the button.
       ) {
                Text(text = "Contribute")
            }
}
```

### Output

![App Screenshot](https://user-images.githubusercontent.com/98453503/194712087-824350ab-9c93-40b4-87d8-2d70e4917407.png)

### #Round Cornered Button

### Code

```Kotlin
@Composable
fun outlinedButton() {
       Button(onClick = {}, 
       shape = RoundedCornerShape(30.dp)
       ) {
                Text(text = "Contribute")
            }
}
```

### Output

![App Screenshot](https://user-images.githubusercontent.com/98453503/194712308-24328091-3423-4a98-9a04-7067b609d7f6.png)

## #Cut Cornered Button

### Code

```Kotlin
@Composable
fun cutCorneredButton() {
      Button(onClick = {},
      shape = CutCornerShape(10)
      ){
                Text(text = "Contribute")
            }
}
```

### Output

![App Screenshot](https://user-images.githubusercontent.com/98453503/194712366-97fe2aa1-d655-4f05-835a-e88a3e74a7bc.png)

### Links for further reference

[Official Documentation](https://developer.android.com/jetpack/compose/layouts/material)

[GFG](https://www.geeksforgeeks.org/button-in-android-using-jetpack-compose/)
