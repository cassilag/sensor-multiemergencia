const int pinBuzzer = 11;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int f = 1000; f <= 5000; f += 250) {
    Serial.println(f);
    tone(pinBuzzer, f);
    delay(1000);
  }
  noTone(pinBuzzer);
  delay(2000);
}
