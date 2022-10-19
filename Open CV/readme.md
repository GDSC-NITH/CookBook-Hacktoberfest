# **Open CV**

> OpenCV (Open Source Computer Vision Library) is an open source computer vision and machine learning software library. OpenCV was built to provide a common infrastructure for computer vision applications and to accelerate the use of machine perception in the commercial products.

## *Contributors are Welcome to contribute to this repo by explaining these topics below in the form of blog. The code should be concised and properly documented*

## Setup
We'll set up our dependencies and launch OpenCV in this section. Having a usable photograph is the objective. Only OpenCV and PIL need to be installed as dependencies (Python Image Library). Installing them using
```
pip install opencv-python pillow
```

## **Basic**

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

- Resizing and Rescaling Frames
- Drawing Shapes & Putting Text
- Image Transformation
- Contour Detection

## **Advance**

- Edge Detection
- Masking
- Blurring
