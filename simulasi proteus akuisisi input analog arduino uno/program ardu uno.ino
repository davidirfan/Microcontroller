int tempPin = A0;
int reading;
float temp;
int LEDBiru = 11;
int LEDHijau = 9;
int LEDMerah = 7;
void setup() {
 // put your setup code here, to run once:
 analogReference(INTERNAL);
 pinMode(LEDBiru, OUTPUT);
 pinMode(LEDHijau, OUTPUT);
 pinMode(LEDMerah, OUTPUT);
}
void loop() {
 // put your main code here, to run repeatedly:
 reading = analogRead(tempPin);
 temp = (reading * 110.0)/1023;
 if (temp < 30)
 {
 digitalWrite(LEDBiru, HIGH);
 delay(100);
 digitalWrite(LEDBiru, LOW);
 }
 else
 {
 digitalWrite(LEDMerah, HIGH);
 delay(100);
 digitalWrite(LEDMerah, LOW);
 }
}
