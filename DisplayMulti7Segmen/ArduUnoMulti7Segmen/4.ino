/* Seven segmen dengan multiplexing
* Arduino pin 7-segmen
* 2 a
* 3 b
* 4 c
* 5 d
* 6 e
* 7 f
* 8 g
* 9 dp (dot pin)
* 10 digit 0
* 11 digit 1
*/
byte digit0 = 10;
byte digit1 = 11;
byte dotPin = 9;
//inisialisasi pin 7 segmen dengan array
byte tujuhSegmenPin[ ] = {0,1,2,3,4,5,6};
// common katoda
byte tujuhSegmen [10] [7]=
{
 //a b c d e f g
 { 1,1,1,1,1,1,0 }, // = 0
 { 0,1,1,0,0,0,0 }, // = 1
 { 1,1,0,1,1,0,1 }, // = 2
 { 1,1,1,1,0,0,1 }, // = 3
 { 0,1,1,0,0,1,1 }, // = 4
 { 1,0,1,1,0,1,1 }, // = 5
 { 1,0,1,1,1,1,1 }, // = 6
 { 1,1,1,0,0,0,0 }, // = 7
 { 1,1,1,1,1,1,1 }, // = 8
 { 1,1,1,1,0,1,1 }, // = 9
};
void setup() {
 // put your setup code here, to run once:
 pinMode(dotPin, OUTPUT);
 pinMode(digit0, OUTPUT);
 pinMode(digit1, OUTPUT);
 for (int i=0; i<9; i++)
 {
 pinMode(tujuhSegmenPin[i], OUTPUT);
 }
digitalWrite(dotPin, HIGH);
digitalWrite(digit0, HIGH);
digitalWrite(digit1, HIGH);
}
//buat fungsi blok untuk menampilkan angka pada peraga segmen
void Angkasegmen (byte digit)
{
 byte pin = 0;
 for (byte i=0; i<9; i++)
 {
 digitalWrite(pin, tujuhSegmen[digit] [i]);
 ++pin;
 }
}
void loop() {
 //kita akan menampilkan angka
 
//teknik multiplexing menampilkan angka pertama
 digitalWrite(digit0, LOW); //aktifkan digit0
 Angkasegmen (0); //kirim angka 5 ke segmen
 delay(2000); //tunda 500 mS
 digitalWrite(digit0, HIGH); //non-aktifkan digit0

//menampilkan angka kedua di digit
 digitalWrite(digit1, LOW); //Aktifkan digit1
 Angkasegmen (1); //kirim angka 6
 delay(2000);
 digitalWrite(digit1,HIGH);
}
