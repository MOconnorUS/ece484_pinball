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

## Flippers
The flippers of a pinball machine are designed top flick a paddle to smack the pinball into the board/obstacles. These are typically player controlled and the main form of player interaction in most pinball machines. Our flippers were comprised of three main parts: The Circuit, The Paddles, and the Code.

### Circuit
For the circuit you'll need the following compoents:
* 1 Arduino Uno
* 2 12V Solenoids
* 2 Buttons
* 2 IRF520 Mosfet Transistors
* 2 1N4007 Diodes
* 2 10k Ohm Resistors
* 2 1k Ohm Resistors
* Wires

Once you have all of the components you can follow the circuit diagram below to create the circuit. There are two main parts to it: solenoids and buttons. The solenoids are essentially a piston, if they are powered the piston fires and is pushed and then once the singal is gone the spring brings the piston back. These are the main component that moves the paddle in order to hit the ball. The buttons are simply there for player interaction, if the player pushes a button then the corresponding solenoid will fire moving the paddle.

(Insert circuit schematic)

### Paddles
The paddles are made from cardboard and tape. There are three main parts to the paddles: the paddle (1), the rotation point (2), the solenoid connection point (3). These are outlined in the picture below for a visual. The general concept is the paddle is the part that hits the ball, needs to be a slight slant so the ball and roll and fall into the hole in the middle. The rotation point is where the flipper is attached to the board. And the solenoid connection point is where the solenoid pulls down in order to spin the flipper to hit/launch the ball.

![20240517_104243](https://github.com/MOconnorUS/ece484_pinball/assets/94214499/c18283bd-3f11-498c-81a8-4b40ce3d8327)


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
