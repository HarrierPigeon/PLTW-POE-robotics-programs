# Unit 3.1.7 - Surgical Arm Robot

### Documentation Rubric
![First Page of Documentation](/3.1.7/Documentation/Documentation%20Requirements.png)
![Second Page of Documentation](/3.1.7/Documentation/Project%20Requirements%20-%20Cropped.png)

## Brainstorming
![Robot Arm Sketch](/3.1.7/Documentation/Robot%20Arm%20Sketch%20Recolor.png)
![Aly Sketch, cropped](/3.1.7/Documentation/Brainstorming%20-%20Surgical%20Arm%20Recolor.png)


## Documentation


> ### The Idea behind this was to have a robot arm that could maintain a constaint height and change length and rotation, enabling the bot to move in a `(x,y)` coordinate field.
> > #### The idea was to have one joystick (both the *`x`* & *`y`* axes) control the robot arm's rotation, by getting the degrees from origin (between 0 and 360) and moving the robot arm to that position. 

### Getting Started

#### The first thing that has to happen is changing the length to keep one coordinate constant:

![Moving in 1 axis by rotation](/3.1.7/Documentation/Moving%20in%201%20axis%20by%20rotation%20while%20keeping%20the%20other%20constant.png)

#### The next is keeping the height the same while changing the length:
![Maintaining Constant Height While Changing Length](/3.1.7/Documentation/
Constant%20Height%20While%20Changing%20Length%20Scan%20ReColor.png)

#### Once I figured out what I needed to do, I had to figure out how to calibrate it.
> ##### I decided to calibrate it by putting limit switches on the ends of the rotation, and encoders on the motors.  The way this works is by counting the number of degrees the motor turns between the maximum and minimum positions of the arm.



| `Loose-Leaf Drawing` | `Engineering Notebook` | `Transcript` |
| :---: | :---: | :---: |
| ![Page on calibration](/3.1.7/Documentation/Reusable%20Calibration%20Code%20Idea%2C%20Psuedocode%2C%20and%20Structure%20Requirements%20Recolor%20Crop.png) | ![Engineering Notebook How it works](/3.1.7/Documentation/3.1.7%20Arm%20-%20Engineering%20Notebook%20Documentation%20Page%202.jpg) | ###### How & Why The Code Works: <br> > This assumes that you know why you're putting the origin where it is.  <br> The *relative* origin, for the base of the arm, should be horizontal and parallel from the floor and the base of the robot. <br>  For The elbow, the second joint, the *relative* origin should be the line between the first joint and the second joint. <br> for this purpose, this method is a PERFECT fit- the measurement needed is from the angle to the two sides next to it. |


##### Psuedocode from Engineering Notebook:
![Engineering Notebook, Page 1](/3.1.7/Documentation/3.1.7%20Arm%20-%20Engineering%20Notebook%20Documentation%20Page%201.jpg)


![Base Rotation, page 2](/3.1.7/Documentation/Base%20Rotation%20Control%20Code%20Recolor.png)

> Drawing of the geometry of it:
#### `Making the Math Work (Arm Length)`

![Making the math work: arm length](/3.1.7/Documentation/Making%20the%20Math%20Work%20(Arm%20Length)%20-%20Sketch%20Page%20on%20calibration%20Recolor.png)


### After calibration, the next thing to do is be able to move the bot's joints ***at the same speed***.

> #### To do this, I assumed some stuff that I possibly shouldn't've.



| `Picture of Previous Page` | `Main Picture` | `Explanation` |
| --- | --- | --- |
| ![Base Rotation Control Code](/3.1.7/Documentation/Base%20Rotation%20Control%20Code%20Recolor.png) | ![3.1 Psuedotime](/3.1.7/Documentation/Base%20Rotation%20Control%20Code%2C%20Step%203.1%20Psuedocode%20for%20Time%20to%20rotate%20Recolor%20Crop.png) | The way this works is by multiplying the degrees moved (Δ degrees) by the maximum power of the motor, <br> *--insert something about physics behind it here--* <br> and then using that to find the power each motor needs to be at to move the same number of degrees in the same amount of time. |

### At this point, I was beginning to run out of time, and the bot wasn't working very well.
> *gee, I wonder why?*





### Because I didn't have enough time to do all of the work I'd cut out for myself, the project rapidly devolved...
![Kludge](/3.1.7/Documentation/Kludge%20Code-%20What%20this%20turned%20into%20Recolor.png)


## Bot Construction Finished
### > I wrote some basic code to see how well the bot worked.
> ####   It didn't.

    First, the robot wasn't able to rotate because of how much axial stress there was on the turntable, then the arm fell down because the shoulder's motor couldn't keep up with the stress, and the elbow had the same issue.
    
Anyway, here are some photos:

| Cables in basement | Front of base | Upper Left Corner of base |
| --- | --- | --- |
|![Potato Base Basement 2.JPG](/3.1.7/Documentation/Potato/Potato%20Base%20Basement%202.JPG)  |![Potato Base Front.JPG](/3.1.7/Documentation/Potato/Potato%20Base%20Front.JPG) |![Potato Base Left Upper Corner.JPG](/3.1.7/Documentation/Potato/Potato%20Base%20Left%20Upper%20Corner.JPG)|
| Right Side of Base | Claw Closeup, closed | Claw Close-up, open |
|![Potato Base Right Side.JPG](/3.1.7/Documentation/Potato/Potato%20Base%20Right%20Side.JPG) |![Potato Claw Motor Close-up Closed.JPG](/3.1.7/Documentation/Potato/Potato%20Claw%20Motor%20Close-up%20Closed.JPG)|![Potato Claw Motor Close-up Open.JPG](/3.1.7/Documentation/Potato/Potato%20Claw%20Motor%20Close-up%20Open.JPG) |
| Wrist Joint | Elbow, encoder side | Elbow Gear Detail |
|![Potato Claw and Wrist Nonmotor side.JPG](/3.1.7/Documentation/Potato/Potato%20Claw%20and%20Wrist%20Nonmotor%20side.JPG) |![Potato Elbow Encoder Side.JPG](/3.1.7/Documentation/Potato/Potato%20Elbow%20Encoder%20Side.JPG) |![Potato Elbow Gear Connection Detail 2.JPG](/3.1.7/Documentation/Potato/Potato%20Elbow%20Gear%20Connection%20Detail%202.JPG) |
| More Elbow details | Top-down of humerus | 
|![Potato Elbow Gear Connection Detail.JPG](/3.1.7/Documentation/Potato/Potato%20Elbow%20Gear%20Connection%20Detail.JPG) |![Potato Elbow Top View.JPG](/3.1.7/Documentation/Potato/Potato%20Elbow%20Top%20View.JPG)|

# Helpful Resources:
> http://www.robotc.net/wikiarchive/Data_Types `Nice little cheatsheet`

> VEX Forums:
>> https://www.vexforum.com/

