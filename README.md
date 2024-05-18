# ECE 484 Pinball Final Project

## Introduction
The ECE 484 Final Project tasks our team with creating a pinball machine with the PinBox 3000 as a base. We were required to add our own embedded systems (Code and Circuits) onto the PinBox in order to make a prototype for a pinball machine. There were a few main components to this: Flippers, Obstacles, Score, Timer, and Plunger.

# Getting Started
## The following are needed in order to perform this project
1. A small scale pinball machine. For this project we used a PinBox 3000
2. Two 12V Solenoids
3. X Arduinos
4. 3 Touch Sensors
5. 2 Ultrasonic Sensors
6. 2 Servo Motors
7. 2 Obstacles
8. 5 Buttons
9. 2 1N4007 Diodes
10. 2 IRF520 Mosfet Transistors
11. 2 10k Ohm Resistors
12. 2 1k Ohm Resistors
13. Wires
14. The Arduino IDE which can be installed [here](https://www.arduino.cc/en/software)
15. Git which can be installed [here](https://git-scm.com/downloads)

### WILL FILL OUT MORE CONTENTS FOR FINAL VERSION & WIKI WILL BE STRUCTURED WITH PROJECT DESIGN

---

# 1. Flippers
The flippers of a pinball machine are designed top flick a paddle to smack the pinball into the board/obstacles. These are typically player controlled and the main form of player interaction in most pinball machines. Our flippers were comprised of three main parts: The Circuit, The Paddles, and the Code.

## 1.1 Circuit
For the circuit you'll need the following compoents:
* 1 Arduino Uno
* 2 12V Solenoids
* 2 Buttons
* 2 IRF520 Mosfet Transistors
* 2 1N4007 Diodes
* 2 10k Ohm Resistors
* 2 1k Ohm Resistors
* Wires

Once you have all of the components you can follow the circuit diagram below to create the circuit. There are two main parts to it: solenoids and buttons. The solenoids are essentially a piston, if they are powered the piston fires and is pushed and then once the singal is gone the spring brings the piston back. These are the main component that moves the paddle in order to hit the ball. The buttons are simply there for player interaction, if the player pushes a button then the corresponding solenoid will fire moving the paddle. A side of causion for this circuit, if improperly set up you run the risk of having 12V enter your Arduino and damaging or frying the microcontroller!

The top circuit is the solenoid which uses a 1k Ohm resistor and the bottom is the button which uses a 10k Ohm resistor. You'll need both of these per solenoid flipper you are making.

![Screenshot 2024-05-17 193342](https://github.com/MOconnorUS/ece484_pinball/assets/94214499/b10a24be-82e9-440b-819f-1d34aa24ceb1)

![button](https://github.com/MOconnorUS/ece484_pinball/assets/94214499/8fc62f9a-69cb-4355-9e7b-46ea631b76d1)

## 1.2 Flippers
The flippers are made from cardboard and tape, there are three main parts: the paddle (1), the rotation point (2), the solenoid connection point (3). These are outlined in the picture below for a visual. The general concept is the paddle is the part that hits the ball, needs to be a slight slant so the ball and roll and fall into the hole in the middle. The rotation point is where the flipper is attached to the board. And the solenoid connection point is where the solenoid pulls down in order to spin the flipper to hit/launch the ball.

![20240517_104243](https://github.com/MOconnorUS/ece484_pinball/assets/94214499/c18283bd-3f11-498c-81a8-4b40ce3d8327)

## 1.3 Code
The code is comprised of two parts. The first is a commented out default set of if statements if you were to go for the bare bones button solenoid code. It allows the right button to activate the right solenoid, and the same goes for the left side. The other code is the is the same as the first except it allows for an extra gameplay element which is when you press the buttons 25 times total the controls will inverse. So when you press the right button it will cause the left solenoid to fire, and same for the left button and right solenoid.

The code will be available for in the repositoy. The way to access it will be outlined below.

## 1.4 Setup
Once you have the circuit and flippers build and the code in your IDE. Simply upload the code to your Arduino (make sure to click on the "Tools" tab and have your Arduino as the selected port). Then connect the power supplies and fire the solenoids!

## 1.5 Demo
The final demo unfortunately utilized the flipper that came with the PinBox 3000. These used a lever method with rubberbands that the player push into the Pinball machine to flick the paddles. There were no added systems in this demo due to the solenoids being burnt out before the demo was done. A picture of the circuit is shown(the one not used in the team demo). A video is linked of the circuit just to show it, but again there won't be any movement with the solenoids.

![20240517_101839 (1)](https://github.com/MOconnorUS/ece484_pinball/assets/94214499/bf817bc9-7def-4b3d-9c1e-a94f5b4c97fd)

https://youtube.com/shorts/7UGwvJfNXc8?feature=share

---
# 2. Obstacles
We are using servo motor to control moving obstacles. It contains stationary, linear motion, and rotational motion obstacles.

![image](https://github.com/LUUUUKER/ECE484_Pinball_Machine/assets/92650444/b1a2ec30-778b-4e01-af28-06885459b43e)

## 2.1 Components

* Arduino Uno * 1
* breadboard
* 10k ohm resistor * 4
* button * 4
* SG90 Servo motor * 2
* hook-up wires
* 9V battery * 1
* rubber bands * 2
* gear and racks * 1 pair
* double-sided adhesive tape/ glue
* small hook * 6
  
## 2.2 The Design
Strength of my design:
1. It is a seperate and independent system from other systems. Easy for maintainance.
2. The control logic is simple and efficient.
3. Power saving, 1 9V battery can be used for a long time.
4. Materials and components are easy to get. low cost.

Weakness of the design:
1. Relatively unstable physical connection. some parts may get loose for long use
2. There are some grooves on the board. They may stuck the ball.

> ### Arduino Connection
![image](https://github.com/LUUUUKER/ECE484_Pinball_Machine/assets/92650444/935f0ce4-cbd8-41e9-a41d-325532c64d8f)

> ### Circuit Diagram
![image](https://github.com/LUUUUKER/ECE484_Pinball_Machine/assets/92650444/c5df436e-f727-4db8-b331-5ebbcee3d459)

> ### Mechanical structure
The most important mechanial structure for this porject is gear and rack set. It is a very efficient way to convert rotational motion to linear motion.
For our machine, we will attach a gear to a servo motor's shaft. There is a rectangular plate on the rack and it is holding an obstacle. When the servo motor spins, the gear will rotate and the rack will move back and forth.

![image](https://github.com/LUUUUKER/ECE484_Pinball_Machine/assets/92650444/abe452dc-010c-424b-8f35-fe49248c8892)

**The hook-rubber-bands structure:**
To make sure the gear can bit the rack fully. I used 2 hooks and 2 rubber bands to pull the servo motor down. This structure is optional if the better connection structure been used.

![image](https://github.com/LUUUUKER/ECE484_Pinball_Machine/assets/92650444/7b5e671e-98a9-408e-ae1b-9e2576728bf5)

## 2.3 Code
The logic of the controlling is not complicated. Since there are 2 servo motors, it is necessary to create 2 servo objects using function `Myservo.attach(ServoPin)` of Servo library. The rotation obstacles can rotate from 0 degree to 180 degrees. The linear motion obstacle can move any distance from the center position. It depends on the size of the gear. The larger the gear, the longger the distance because the circumference of the gear is larger.

### The setup

![image](https://github.com/LUUUUKER/ECE484_Pinball_Machine/assets/92650444/958297da-764c-4056-ac55-95485d2f4e2b)


### rotation controlling

![image](https://github.com/LUUUUKER/ECE484_Pinball_Machine/assets/92650444/6cabb170-e2e5-4b92-940b-0c3d93d73c14)

There are 3 other same logic if-statements. So, 4 buttons control 2 servo motors to spin in both directions. 
If button is pressed, and the pose of the servo motor is between 0 - 180 degree. The angle will increase 2 degrees(can be modified).
If the button is out of the range, it will stay at 0 degree or 180 degree.
 

## 2.4 Demo Videos
Up-side of the board: [video1](https://www.youtube.com/shorts/B_pMbELaD6g?feature=share)

Down-side of the board: [video2](https://www.youtube.com/watch?v=gnFavA0sfAg)

---

## 5. Plunger
The plunger was rather straight forward. The PinBox 3000 comes with a functioning plunger that works with a rubber band a small chamber for the ball to rest. We just used what came with the box and added no new systems.

---

# After completed everything above, the following will allow you to access and run the project
Now that the installations are all complete and your pinball machine is assembled. All that is left for you to do is clone the repository!

# How to clone the repository
1. Open Command prompt type `cmd` into the search bar on your windows device
2. Navigate to your the folder you wish to clone the repository in this can be done by typing `cd file_path_to_directory`
3. Click on the green code button on the repository shown in the image below  
![Green Code Button](/assets/images/code_button.PNG "Green Code Button")
4. Copy the github link provided in the drop down by clicking the button circled in the image below  
![Copy Clone URL](/assets/images/copy_clone.PNG "Copy Clone URL")
5. Type: git clone github_link *github_link is the url provided by github which can be pasted by right clicking on the command prompt*
