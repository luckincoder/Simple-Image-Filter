# Simple Image Filter
 
<b>grayscale<b/>
- This function takes an image and converts it to black and white. This is done by taking an average of the red, green and blue values of each pixel and setting them all equal to the average.

<b>reflect<b/>
- This function flips an image about the vertical axis, which will return a mirror image. To do this each pixel is moved to the equivalent position at the other side of the image.

<b>blur<b/>
- This function returns a blurred version of the input image. This is done by setting each pixel’s RGB values to the average of those that surround it.

<b>edges<b/>
- This function detects any edges between objects in the image and highlight these. This is done using the Sobel operator, which computes the new value of each pixel by taking a weighted sum of the values for the surrounding pixels. These sums are calculated for both the x and y directions, with the red, blue and green values multiplied by the operators in the two ‘kernels’.
