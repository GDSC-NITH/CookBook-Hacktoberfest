# **Open CV**

> OpenCV (Open Source Computer Vision Library) is an open source computer vision and machine learning software library. OpenCV was built to provide a common infrastructure for computer vision applications and to accelerate the use of machine perception in the commercial products.

## *Contributors are Welcome to contribute to this repo by explaining these topics below in the form of blog. The code should be concised and properly documented*

## Setup
We'll set up our dependencies and launch OpenCV in this section. Having a usable photograph is the objective. Only OpenCV and PIL need to be installed as dependencies (Python Image Library). Installing them using
```
pip install opencv-python pillow
```

# **Basic**

## Reading Images and Video
There are 4 methods for reading images in OpenCV
• Load an image
• Read your webcam
• Read your screen
• Load a video file


To get started, let's just read an image from a file. The next step is to "film" our screen. This can be used to analyse the images that are displayed on the screen (more on this later). Finally, we'll begin reading video and photos from our webcam.
### 1. Load An Image
```
import cv2img = cv2.imread(filename="c:/path/to/image.png")
cv2.imshow('image', img)
cv2.waitKey(0)
cv2.destroyAllWindows()
```
OpenCV employs BGR (this was popular among camera manufacturers and software back in the day). Our initial image operation is to convert from BGR to RGB, We change the image such that we are left with how it should be by adding a single line.
```
img = cv2.imread(filename="c:/path/to/image.png")
img = cv2.cvtColor(src=img, code=cv2.COLOR_BGR2RGB)
cv2.imshow('image', img)
cv2.waitKey(0)
```
### 2. Read Your Webcam
We use OpenCV to record video from our webcam. In order to get two variables—ret, which is True if we can read frames, and frame—we use an OpenCV function to capture our camera. We then change our colours once more (to grey this time), present the frame, and wait for our escape key to begin cleaning up.
```
cap = cv2.VideoCapture(0)
while True:
    ret, frame = cap.read()
    frame = cv2.cvtColor(src=frame, code=cv2.COLOR_BGR2RGB)
    cv2.imshow('webcam', frame)# press escape to exit
    if (cv2.waitKey(30) == 27):
       break
cap.release()
cv2.destroyAllWindows()
```
### 3. Read Your Screen
It has to be changed into a Numpy array so that OpenCV can use it. The same as previously, we convert to RGB and instruct OpenCV to display the image. However, waitKey(30) == 27 instructs OpenCV to exit the loop when the escape key is pressed. Clean-up again is in the final line.
```
import cv2
import numpy as np
from PIL import ImageGrabwhile (True):
    screen = np.array(ImageGrab.grab())
    screen = cv2.cvtColor(src=screen, code=cv2.COLOR_BGR2RGB)
    cv2.imshow('my_screen', screen)
    
    # press escape to exit
    if (cv2.waitKey(30) == 27):
       break
cv2.destroyAllWindows()
```
### 4. Load a Video file
The only difference between reading a video file and reading your webcam is that we have to pass the file location:
```
cap = vc2.VideoCapture('c:/path/to/my/file.mp4
```

## Resizing and Rescaling Frames
Use the cv2.resize() function in OpenCV to resize an image. The cv2.resize() function's syntax is as follows:
```
cv2.resize(src, dsize, fx, fy, interpolation)
```
Where-<br>
    src is the source of the image.
    dsize is the desired size of the output image. This is a tuple of two integers.<br>
    fx [optional] scale factor along the horizontal axis.<br>
    fy [optional] scale factor along the vertical axis.<br>
    interpolation [optional] flag that controls the arrangement of the output pixels.<br>

In other words, we will use the syntax shown below to invoke the cv2.resize() function:
```
cv2.resize(src, (new_width, new_height))
```
(new_width, new_height) is the dsize parameter from the original syntax.

Let's now examine image resizing with OpenCV in more detail. We're going to do this:
• Downscaling
• Upscaling
• Width-only resizing
• Height-only resizing

### 1. Downscaling with OpenCV
Downscaling your image is one method of altering its size. This indicates that you reduce the image's size while maintaining the image's aspect ratio.<br>
To accomplish this, choose a scale factor lower than 1.<br>
The scaling factor should then be multiplied by the original image's width and height.<br>
Call the cv2.resize() function one last time with the reduced width and height.<br>
Let's use the imshow() function to, for example, scale the image to 25% of its original size and display it.
```
import cv2
img = cv2.imread('image.jpeg')
p = 0.25
new_width = int(img.shape[1] * p)
new_height = int(img.shape[0] * p)
resized = cv2.resize(img, (new_width, new_height))
cv2.imshow(f"Elephants at scale {p}", resized)

# Hide the image window with any key press
cv2.waitKey()
cv2.destroyAllWindows()
```
### 2. Upscaling with OpenCV
Upscaling your image is an additional method of altering its size. By doing this, you maintain the image's aspect ratio while enlarging it.<br>
To accomplish this, choose a scaling factor higher than 1.<br>
The scaling factor should then be multiplied by the original image's width and height.<br>
Finally, use upscaled width and height when calling cv2.resize().<br>
Let's scale the image up to 150% of what it was originally:<br>
```
import cv2
img = cv2.imread('image.jpeg')
p = 1.5
new_width = int(img.shape[1] * p)
new_height = int(img.shape[0] * p)

resized = cv2.resize(img, (new_width, new_height))
cv2.imshow(f"Elephants at scale {p}", resized)

cv2.waitKey()
cv2.destroyAllWindows()
```

### 3. Change Width Only
Call the cv2.resize() function with the original height and a custom width if you wish to adjust the image's width.
```
import cv2
 
img = cv2.imread('image.jpeg')
new_width = 400
resized = cv2.resize(img, (new_width, img.shape[0]))
cv2.imshow("Elephants", resized)

cv2.waitKey()
cv2.destroyAllWindows()
```

### 4. Change Height Only
Call the cv2.resize() function with the original width and a custom height if you want to adjust the image's height.
```
import cv2
img = cv2.imread('image.jpeg')
new_height = 300
resized = cv2.resize(img, (img.shape[1], new_height))
cv2.imshow("Elephants", resized)

cv2.waitKey()
cv2.destroyAllWindows()
```

## Drawing Shapes & Putting Text
## Image Transformation
## Contour Detection

# **Advance**

- Edge Detection
- Masking
- Blurring
