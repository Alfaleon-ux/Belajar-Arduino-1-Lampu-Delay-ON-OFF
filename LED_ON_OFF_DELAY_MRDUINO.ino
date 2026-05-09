//MR.DUINO 1_LED ON OFF DELAY 1 SECOND

void setup() {
  pinMode(13, OUTPUT);  // Mengatur pin 13 sebagai output
}

void loop() {
  digitalWrite(13, HIGH);  // Menghidupkan LED
  delay(1000);             // Menunggu 1 detik
  digitalWrite(13, LOW);   // Mematikan LED
  delay(1000);             // Menunggu 1 detik
}