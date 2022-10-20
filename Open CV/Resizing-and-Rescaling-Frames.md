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
