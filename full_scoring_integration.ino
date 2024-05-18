// Matthew O'Connor
// ECE 484 Pinball Scoring Integration
#include <NewPing.h>
#include <Wire.h>           // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for the LCD

// Initialize the LCD to be at I2C address 0x27 with 16 columns and 2 rows
LiquidCrystal_I2C lcd_score(0x27, 16, 2);

const int trigPin1 = 10;
const int echoPin1 = 9;
const int touchPin1 = 2;
const int touchPin2 = 3;
const int startButton = 6;

int playerOneScore = 0;
int seconds;
int scorePing;
int touchValue1;
int touchValue2;

bool buttonPressed = false;
unsigned long debounceDelay = 50; 
bool restartGame = false;

char buffer[30];

NewPing sonar1(trigPin1, echoPin1, 300);

void setup() {
  pinMode(touchPin1, INPUT);
  pinMode(touchPin2, INPUT);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(startButton, INPUT_PULLUP); 

  Serial.begin(9600);
  lcd_score.init();
  lcd_score.backlight();
  lcd_score.clear();

  lcd_score.setCursor(0, 0);
  lcd_score.print("Press Start");
  lcd_score.setCursor(0, 1);
  lcd_score.print("To Play");

}

void loop() {
  if (restartGame) {
      restartGame = false; 
      startGame(); 
  }

  int read = digitalRead(startButton);
    
  if (read == LOW && !buttonPressed) {
      delay(debounceDelay); 
      read = digitalRead(startButton); 
      if (read == LOW) { 
          buttonPressed = true;
          startGame();
      }
  } else if (read == HIGH && buttonPressed) {
      buttonPressed = false; 
  }
}

void startGame() {
  seconds = 120;
  
  lcd_score.clear();
  lcd_score.setCursor(0, 0);
  lcd_score.print("Player 1: ");
  lcd_score.print(playerOneScore);
    
  while(seconds >= 0) {
    touchValue1 = digitalRead(touchPin1);
    touchValue2 = digitalRead(touchPin2);
    touchValue3 = digitalRead(touchPin3);
    lcd_score.setCursor(10, 0);
    lcd_score.print(playerOneScore);
    
    scorePing = sonar1.ping_cm();
    
    if (touchValue1 == HIGH) {
      playerOneScore += 20;
      
      while(touchValue1 == 1){ touchValue1 = digitalRead(touchPin1); }
    }

    if (touchValue2 == HIGH) {
      playerOneScore += 40;
    
      while(touchValue2 == 1){ touchValue2 = digitalRead(touchPin2); }
    }

    if (touchValue3 == HIGH) {
      playerOneScore += 60;
    
      while(touchValue3 == 1){ touchValue3 = digitalRead(touchPin3); }
    }
      
    if (scorePing < 20) {
      playerOneScore += 80;
      
      while(1){
        if (scorePing >= 20) {
          break;
        }
          
        scorePing = sonar1.ping_cm();
      }
    }

    seconds -= 1;
    delay(1000);
  }
  
  if (seconds < 0) {
    gameOver();
    restartGame = true;
    return;
  }      
}


void gameOver() {
  lcd_score.clear();
  lcd_score.setCursor(0, 0);
  lcd_score.print("Game Over");

  lcd_score.clear();
  lcd_score.setCursor(0, 0);
  sprintf(buffer, "P1 Score: %d", playerOneScore);
  lcd_score.print(buffer);
  
  while(true) {
        int read = digitalRead(startButton);
        if (read == LOW) {
            lcd_score.clear();
            delay(100);
            return; 
        }
    }
}
