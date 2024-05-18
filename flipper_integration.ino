// ECE 484 Pinball Machine Flippers
// Logan Rauh

const int solenoidPinR = 9;
const int solenoidPinL = 8;
const int buttonR = 3;
const int buttonL = 2;

int pressCount = 0;
bool inverse = false;

void setup() 
{
  Serial.begin(9600);

  pinMode(solenoidPinR, OUTPUT);
  pinMode(buttonR, INPUT);
  pinMode(solenoidPinL, OUTPUT);
  pinMode(buttonL, INPUT);
}

void loop() {

// The commented section here is a general button and solenoid code for slippers.
//  if (digitalRead(buttonR) == HIGH) {
//    digitalWrite(solenoidPinR, HIGH);
//  } else {
//    digitalWrite(solenoidPinR, LOW);
//  }

//  if (digitalRead(buttonL) == HIGH) {
//    digitalWrite(solenoidPinL, HIGH);
//  } else {
//    digitalWrite(solenoidPinL, LOW);
//  }

// Below is a button solenoid code with a little more difficulty for the game, 
// the controls will inverse for the rest of the game after 25 presses of either button!
  if (digitalRead(buttonR) == HIGH && inverse == false) {
    digitalWrite(solenoidPinR, HIGH);
    pressCount++;
    if (pressCount > 25) {
      inverse = true;
    }
  } else if (digitalRead(buttonR) == HIGH && inverse == true) {
    digitalWrite(solenoidPinL, HIGH);
  } else {
    digitalWrite(solenoidPinR, LOW);
  }

  if (digitalRead(buttonL) == HIGH && inverse == false) {
    digitalWrite(solenoidPinL, HIGH);
        pressCount++;
    if (pressCount > 25) {
      inverse = true;
    }
  } else if (digitalRead(buttonL) == HIGH && inverse == true) {
    digitalWrite(solenoidPinR, HIGH);
  } else {
    digitalWrite(solenoidPinL, LOW);
  }

}