# Unit 3.1.7 - Surgical Arm Robot

### Documentation Rubric
![First Page of Documentation](/3.1.7/Documentation/Documentation%20Requirements.png)
![Second Page of Documentation](/3.1.7/Documentation/Project%20Requirements%20-%20Cropped.png)

## Brainstorming
![Robot Arm Sketch](/3.1.7/Documentation/Robot%20Arm%20Sketch%20Recolor.png)
![Aly Sketch, cropped](/3.1.7/Documentation/Brainstorming%20-%20Surgical%20Arm%20Recolor.png)


## Documentation


> ### The Idea behind this was to have a robot arm that could maintain a constaint height and change length and rotation, enabling the bot to move in a `(x,y)` coordinate field.

### Getting Started

#### The first thing that has to happen is changing the length to keep one coordinate constant:

![Moving in 1 axis by rotation](/3.1.7/Documentation/Moving%20in%201%20axis%20by%20rotation%20while%20keeping%20the%20other%20constant.png)

#### The next is keeping the height the same while changing the length:
![Maintaining Constant Height While Changing Length](/3.1.7/Documentation/Maintaining%20Constant%20Height%20While%20Changing%20Length%20Scan%20ReColor.png)

#### Once I figured out what I needed to do, I had to figure out how to calibrate it.
> ##### I decided to calibrate it by putting limit switches on the ends of the rotation, and encoders on the motors.  The way this works is by counting the number of degrees the motor turns between the maximum and minimum positions of the arm.

| `Loose-Leaf Drawing` | `Engineering Notebook` | `Transcript` |
| --- | --- | --- |
| ![Page on calibration](/3.1.7/Documentation/Reusable%20Calibration%20Code%20Idea%2C%20Psuedocode%2C%20and%20Structure%20Requirements%20Recolor%20Crop.png) | `<Insert Engineering notebook page here>` | ###### How & Why The Code Works: <br> > This assumes that you know why you're putting the origin where it is.  <br> The *relative* origin, for the base of the arm, shoulld be horizontal and parallel from the floor and the base of the robot. <br>  For The elbow, the second joint, the *relative* origin should be the line between the first joint and the second joint. <br> for this purpose, this method is a PERFECT fit- the measurement needed is from the angle to the two sides next to it. |

### After calibration, the next thing to do is be able to move the bot's joints ***at the same speed***.

> #### To do this, I assumed some stuff that I probably shouldn't've.

| `Picture of Previous Page` | `Main Picture` | `Explanation` |
| --- | --- | --- |
| ![Base Rotation Control Code](/3.1.7/Documentation/Base%20Rotation%20Control%20Code%20Recolor.png) | ![3.1 Psuedotime](/3.1.7/Documentation/Base%20Rotation%20Control%20Code%2C%20Step%203.1%20Psuedocode%20for%20Time%20to%20rotate%20Recolor%20Crop.png) | The way this works is by multiplying the degrees moved (Δ degrees) by the maximum power of the motor, <br> *--insert something about physics behind it here--* <br> and then using that to find the power each motor needs to be at to move the same number of degrees in the same amount of time. |





### Because I didn't have enough time to do all of this, the project rapidly devolved...
![Kludge](/3.1.7/Documentation/Kludge%20Code-%20What%20this%20turned%20into%20Recolor.png)



## Robot Arm Programming 

I'm currently working on a *whole* new set of things from what I'm used to.

# Helpful Resources:
> http://www.robotc.net/wikiarchive/Data_Types#dataType_tMotor

