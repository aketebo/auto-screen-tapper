int clickerOnePin = 7;
int clickerTwoPin = 13;
int clickerThreePin = 4;
int betweenClicksDelay = 5;
int highLowDelay = 10;

void setup() {
  pinMode(clickerOnePin, OUTPUT);
  pinMode(clickerTwoPin, OUTPUT);
}

void loop() {
  digitalWrite(clickerOnePin, LOW);
  delay(highLowDelay);
  digitalWrite(clickerOnePin, HIGH);
  delay(betweenClicksDelay);
  digitalWrite(clickerTwoPin, LOW);
  delay(highLowDelay);
  digitalWrite(clickerTwoPin, HIGH);
  delay(betweenClicksDelay);
  digitalWrite(clickerThreePin, LOW);
  delay(highLowDelay);
  digitalWrite(clickerThreePin, HIGH);
  delay(betweenClicksDelay);
}
