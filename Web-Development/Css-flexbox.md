# CSS Flexbox
The flexbox or flexible box model in CSS is a one-dimensional layout model that has flexible and efficient layouts with distributed spaces among items to control their alignment structure ie., it is a layout model that provides an easy and clean way to arrange items within a container.

## How to create a flexbox?
You wil need a basic knoledge of html and css to create a flexbox. All steps will be explained in this document in breif.
But let us know some importatnt parts of flexbox first.

### There are 2 main components of the Flexbox:
Flex Container: The parent “div” which contains various divisions is called a flex container.
Flex Items: The items inside the container “div” are flex items.
![image](https://user-images.githubusercontent.com/97960380/194923065-3974047a-5a02-47e7-bf08-6221c8e98d6c.png)
## Properties for the Parent (flex container)
### 1. display
This defines a flex container; inline or block depending on the given value. It enables a flex context for all its direct children.
```.container {
  display: flex; /* or inline-flex */
}
```
### 2.Flex-direction
This establishes the main-axis, thus defining the direction flex items are placed in the flex container. Flexbox is (aside from optional wrapping) a single-direction layout concept. Think of flex items as primarily laying out either in horizontal rows or vertical columns.
```
.container {
  flex-direction: row | row-reverse | column | column-reverse;
}
```
row (default): left to right in ltr; right to left in rtl
row-reverse: right to left in ltr; left to right in rtl
column: same as row but top to bottom
column-reverse: same as row-reverse but bottom to top

### 3.flex-wrap
By default, flex items will all try to fit onto one line. You can change that and allow the items to wrap as needed with this property.
```
.container {
  flex-wrap: nowrap | wrap | wrap-reverse;
}
```
nowrap (default): all flex items will be on one line
wrap: flex items will wrap onto multiple lines, from top to bottom.
wrap-reverse: flex items will wrap onto multiple lines from bottom to top.

### 4.flex-flow
This is a shorthand for the flex-direction and flex-wrap properties, which together define the flex container’s main and cross axes. The default value is row nowrap.
```
.container {
  flex-flow: column wrap;
}
```

### 5. justify-content
This defines the alignment along the main axis. It helps distribute extra free space leftover when either all the flex items on a line are inflexible, or are flexible but have reached their maximum size. It also exerts some control over the alignment of items when they overflow the line.
```
.container {
  justify-content: flex-start | flex-end | center | space-between | space-around | space-evenly | start | end | left | right ... + safe | unsafe;
}
```
### 6.align-items
This defines the default behavior for how flex items are laid out along the cross axis on the current line. Think of it as the justify-content version for the cross-axis (perpendicular to the main-axis).
```
.container {
  align-items: stretch | flex-start | flex-end | center | baseline | first baseline | last baseline | start | end | self-start | self-end + ... safe | unsafe;
}
```

### 7.align-content
This aligns a flex container’s lines within when there is extra space in the cross-axis, similar to how justify-content aligns individual items within the main-axis.
```
.container {
  align-content: flex-start | flex-end | center | space-between | space-around | space-evenly | stretch | start | end | baseline | first baseline | last baseline + ... safe | unsafe;
}
```

### NOW,
You can  set colour , Padding ,Size ,Background colour, margin of flexbox according to your need or desire. This can be done by using ``` <style >``` Tag in html page or in style sheet.
We can understand it by an example given below .
Lets make a basic flexbox having 3 items in it.

## HTML Code for Flexbox
```
!DOCTYPE html>
<html>
 
<head>
    <title>Flexbox Tutorial</title>
    <style>
    .flex-container {
        display: flex;
        background-color: #32a852;
    }
     
    .flex-container div {
        background-color: #c9d1cb;
        margin: 10px;
        padding: 10px;
    }
    </style>
</head>
 
<body>
    <h2>GeeksforGeeks</h2>
    <h4> Flexbox</h4>
    <div class="flex-container">
        <div>Item1</div>
        <div>Item2</div>
        <div>Item3</div>
    </div>
</body>
 
</html>
```
### Output:
![image](https://user-images.githubusercontent.com/97960380/194922284-5324cd08-9142-42eb-90be-3f851aae006c.png)

### therefore we can make an basic flexbox with a simple code ,
#### and it can be adjusted accordnig to your need. 
