int LEDpin = 11;
int bright = 0;
int increm = 5;
int time = 25;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LEDpin, bright);
  delay(1000);
  bright = bright + increm;
  if(
    bright <= 0 || bright >= 255
  )
  increm = - increm;
}
