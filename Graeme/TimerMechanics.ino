#include <LiquidCrystal.h>

int seconds;
const int startButton = 6;
bool buttonPressed = false;
unsigned long debounceDelay = 50; 
bool restartGame = false; 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
    lcd.begin(16, 2);
    pinMode(startButton, INPUT_PULLUP); 
    Serial.begin(9600);
    lcd.setCursor(0, 0);
    lcd.print("Press Start!");
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
    lcd.clear();
    lcd.print("Time Remaining: ");
    seconds = 120;

    while (seconds >= 0) {
        lcd.setCursor(7, 1);
        lcd.print("    ");
        lcd.setCursor(7, 1);
        lcd.print(seconds);
        seconds -= 1;

        if (seconds < 0) {
            lcd.clear();
            lcd.setCursor(0, 0);
            gameOver();
            delay(100);
            restartGame = true;
            return; 
        }
        lcd.display();  
        delay(1000);
    }
}

void gameOver() {
    lcd.clear();
    lcd.print("Game Over!");
    lcd.setCursor(0,1);
    lcd.print("Press restart");
  
    while(true) {
        int read = digitalRead(startButton);
        if (read == LOW) {
            lcd.clear();
            delay(100);
            return; 
        }
    }
}
