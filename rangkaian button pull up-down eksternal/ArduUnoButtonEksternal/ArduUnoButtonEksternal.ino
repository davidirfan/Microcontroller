int LED=9;
int SAKLAR=7;
int kondisiSaklar=0;

void setup() {
 // put your setup code here, to run once:
 pinMode(LED, OUTPUT);
 pinMode(SAKLAR, INPUT);
}

void loop() {
 // put your main code here, to run repeatedly:
 kondisiSaklar=digitalRead(SAKLAR);
 if (kondisiSaklar==LOW)
 {
 digitalWrite(LED, HIGH);
 } 
 else 
 {
 digitalWrite(LED, LOW);
 }
}
