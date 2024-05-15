#include <LiquidCrystal.h>

const int scorePin1 = 2;
const int scorePin2 = 3;
const int scorePin3 = 4;
const int scorePin4 = 5;
const int scorePin5 = 6;
const int scorePin6 = 7;
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
long score = 0;

void setup() {
    pinMode(scorePin1, INPUT_PULLUP);
    pinMode(scorePin2, INPUT_PULLUP);
    pinMode(scorePin3, INPUT_PULLUP);
    pinMode(scorePin4, INPUT_PULLUP);
    pinMode(scorePin5, INPUT_PULLUP);
    pinMode(scorePin6, INPUT_PULLUP);

    attachInterrupt(digitalPinToInterrupt(scorePin1), incrementScore, FALLING);
    attachInterrupt(digitalPinToInterrupt(scorePin2), incrementScore, FALLING);
    attachInterrupt(digitalPinToInterrupt(scorePin3), incrementScore, FALLING);
    attachInterrupt(digitalPinToInterrupt(scorePin4), incrementScore, FALLING);
    attachInterrupt(digitalPinToInterrupt(scorePin5), incrementScore, FALLING);
    attachInterrupt(digitalPinToInterrupt(scorePin6), incrementScore, FALLING);
    lcd.begin(16, 2);
    lcd.print("Score:");
}
void loop(){}

void incrementScore() {
  if(digitalRead(scorePin1) == HIGH) {
    score += 100;
  }
  if(digitalRead(scorePin2) == HIGH) {
    score += 200;
  }
  if(digitalRead(scorePin3) == HIGH) {
    score += 300;
  }
  if(digitalRead(scorePin4) == HIGH) {
    score += 400;
  }
  if(digitalRead(scorePin5) == HIGH) {
    score += 500;
  }
  if(digitalRead(scorePin6) == HIGH) {
    score += 600;
  }
    lcd.setCursor(7, 1);
    lcd.print(score);
}
