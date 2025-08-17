// C++ code
//

const int ledPins[] = {2,3,4,5,6,7};
int buttonStatus = 0;

void setup()
{
  for(int i = 0; i < 6; i++) {
  	pinMode(ledPins[i],OUTPUT); 
  }
  randomSeed(analogRead(0));
  Serial.begin(9600);
}

void loop()
{
  buttonStatus = digitalRead(13);
  if(buttonStatus == HIGH) {
  	int dice = random(1,7);
    showNumber(dice);
    delay(500);
  }
}

void showNumber(const int dice) {
  for (int i = 0; i < 6; i++) {
	digitalWrite(ledPins[i], LOW);
  }
  Serial.println(dice);
  if(dice == 1) {
  	digitalWrite(ledPins[2], HIGH);
    delay(500);
    digitalWrite(ledPins[2], LOW);
  } else if (dice == 2) {
	digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[5], HIGH);
    delay(500);
    digitalWrite(ledPins[0], LOW);
    digitalWrite(ledPins[5], LOW);
  } else if (dice == 3) {
  	digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[5], HIGH);
    delay(500);
    digitalWrite(ledPins[0], LOW);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[5], LOW);
  } else if (dice == 4) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[4], HIGH);
    digitalWrite(ledPins[5], HIGH);
    delay(500);
    digitalWrite(ledPins[0], LOW);
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[4], LOW);
    digitalWrite(ledPins[5], LOW);
  } else if (dice == 5) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[4], HIGH);
    digitalWrite(ledPins[5], HIGH);
    delay(500);
    digitalWrite(ledPins[0], LOW);
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[4], LOW);
    digitalWrite(ledPins[5], LOW);
  } else {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[4], HIGH);
    digitalWrite(ledPins[5], HIGH);
    delay(500);
    digitalWrite(ledPins[0], LOW);
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);
    digitalWrite(ledPins[5], LOW);
  }
}