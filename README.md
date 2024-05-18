# ECE 484 Pinball Final Project

## Introduction
The ECE 484 Final Project tasks our team with creating a pinball machine with the PinBox 3000 as a base. We were required to add our own embedded systems (Code and Circuits) onto the PinBox in order to make a prototype for a pinball machine. There were a few main components to this: Flippers, Obstacles, Score, Timer, and Plunger.

# Getting Started
## The following are needed in order to perform this project
1. A small scale pinball machine. For this project we used a PinBox 3000
2. Two 12V Solenoids
3. 4 Arduinos
4. 2 Touch Sensors
5. 1 Ultrasonic Sensors
6. 2 Servo Motors
7. 2 Obstacles
8. 6 Buttons
9. 2 1N4007 Diodes
10. 2 IRF520 Mosfet Transistors
11. 2 10k Ohm Resistors
12. 2 1k Ohm Resistors
13. Wires
14. Aluminum Foil Tape/Conductive Tape
15. The Arduino IDE which can be installed [here](https://www.arduino.cc/en/software)
16. Git which can be installed [here](https://git-scm.com/downloads)

---
# About our Game
Our ECE 484 Pinball machine is a standard pinball machine with a twist. Rather than one person playing alone, our game accepts up to two players to play against one another. The objective of player 1 is the same as a standard pinball game. They are supposed to rack up as many points by triggering various sensors which gives certain point amounts. On the other hand however player 2's objective is to play defense against player 1. Player two has 4 buttons at their disposal to control 2 obstacles. One obstacle rotates 90 degrees to the right and left while the other moves left to right. The goal of player 2 is to prevent player 1 from scoring points while player 1 is trying to get as high of a score as possible.

---
# About the System
## Flippers
The flippers of a pinball machine are designed to flick a paddle to smack the pinball into the board/obstacles. These are typically player controlled and the main form of player interaction in most pinball machines. Our flippers were comprised of three main parts: The Circuit, The Paddles, and the Code.

## Obstacles
The obstacles are designed for a second player to operate and play defense against the player operating the flippers. The system is comprised of two servo motors, a set of gears and racks, and 4 push buttons. One obstacle will move either 90 degrees to the right or left depending on the button pressed and it will not exceed 90 degrees of one way. The other obstacle will move on a track left to right to defend the goal sensor in the back. 

Strength of the design:
1. It is a seperate and independent system from other systems. Easy for maintainance.
2. The control logic is simple and efficient.
3. Power saving, 1 9V battery can be used for a long time.
4. Materials and components are easy to get. low cost.

Weakness of the design:
1. Relatively unstable physical connection. some parts may get loose for long use
2. There are some grooves on the board. They may stuck the ball.

## Scoring
The scoring mechanism is made up of two touch sensors, an ultrasonic sensor, a LCD display, and a push button. When the system is given power it will produce a starting screen telling the player to press the button to start the game. This will start the scoring system allowing the player to earn various point amounts depending on the touch sensor they hit or if they make it to the ultrasonic sensor in the back acting as a goal. After a game is concluded a game over message will display along with the players score. 

## Timer
The timer utilizes a LCD display with a push button to start the timer itself. Upon being pressed a 120 second timer will start to count down and once it reaches 0 a game over message will be displayed along with replay instructions. If the button is pressed again the game will immediately restart.

## Plunger
The plunger was rather straight forward. The PinBox 3000 comes with a functioning plunger that works with a rubber band a small chamber for the ball to rest. We just used what came with the box and added no new systems.

### If you want a low level understanding of our system and the various aspects to it visit our [wiki](https://github.com/MOconnorUS/ece484_pinball/wiki)

---

# How to clone the repository
1. Open Command prompt type `cmd` into the search bar on your windows device
2. Navigate to your the folder you wish to clone the repository in this can be done by typing `cd file_path_to_directory`
3. Click on the green code button on the repository shown in the image below  
![Green Code Button](/assets/images/code_button.PNG "Green Code Button")
4. Copy the github link provided in the drop down by clicking the button circled in the image below  
![Copy Clone URL](/assets/images/copy_clone.PNG "Copy Clone URL")
5. Type: git clone github_link *github_link is the url provided by github which can be pasted by right clicking on the command prompt*
