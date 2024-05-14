#include <NewPing.h>

const int trigPin1 = 10;
const int echoPin1 = 9;
const int trigPin2 = 13;
const int echoPin2 = 12;
const int touchPin = 4;

int count = 0;

NewPing sonar1(trigPin1, echoPin1, 300); // 300 cm max distance
NewPing sonar2(trigPin2, echoPin2, 300);

void setup() {
  // put your setup code here, to run once:
      
  pinMode(touchPin, INPUT);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int distanceClose = sonar1.ping_cm();
  int distanceFar = sonar2.ping_cm();
  int touchValue = digitalRead(touchPin); 

  // will need to make it so one touch = 1 point as it might be more
  if (touchValue == HIGH) {
    count++;

    while(touchValue == 1){ touchValue = digitalRead(touchPin); }
  }
  
  if (distanceClose < 60 && distanceFar >= 60) {
    count++;
  } else if ((distanceClose < 60 && distanceFar < 60) || (distanceFar < 60 && distanceClose >= 60)) {
    Serial.println("Game Over");
    Serial.print("Score: ");
    Serial.println(count);
    while(1);
  } else {
    Serial.println("No Interference");
  }

  Serial.print("Touch Value: ");
  Serial.println(touchValue);
  delay(500);

}
