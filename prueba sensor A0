int pinAnalogo = A0; // Pin donde se conecta la señal
int valor = 0;       // Variable para guardar el valor

void setup() {
  Serial.begin(9600); // Inicia la comunicación serie
}

void loop() {
  valor = analogRead(pinAnalogo); // Lee el pin A0 (0 a 1023)
  Serial.println(valor);          // Muestra el valor en la pantalla
  delay(500);                     // Espera medio segundo
}
