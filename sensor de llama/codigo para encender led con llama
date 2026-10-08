const int pinSensor = A0;   // Sensor de llama (entrada analógica 0)
const int pinLed = 2;       // LED (salida digital 2)
const int umbral = 200;     // Valor límite de detección

void setup() {
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);       // Opcional: para ver los valores en el monitor serie
}

void loop() {
  int valorSensor = analogRead(pinSensor);

  Serial.println(valorSensor);  // Opcional: útil para calibrar

  if (valorSensor < umbral) {
    digitalWrite(pinLed, HIGH);  // Llama detectada: enciende el LED
  } else {
    digitalWrite(pinLed, LOW);   // Sin llama: apaga el LED
  }

  delay(100);
}
