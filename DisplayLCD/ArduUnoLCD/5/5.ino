#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
 // set jumlah kolom dan baris LCD yang digunakan:
 lcd.begin(16, 2);
}
void loop() {
 // put your main code here, to run repeatedly:
 lcd.setCursor(0, 0);
 lcd.print("NAMA SAYA");
 lcd.setCursor(0, 1);
 lcd.print("David I.J");
}
