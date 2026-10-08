const int pinLlama  = A0;   // Sensor de llama
const int pinTilt   = A3;   // Sensor de tilt
const int pinLed    = 2;    // LED
const int pinBuzzer = 11;   // Buzzer

const int umbralLlama = 200;  // Llama si valor < 200
const int umbralTilt  = 100;  // Tambaleo si valor > 100

// Frecuencias alrededor de 1000 Hz (donde tu buzzer suena más fuerte)
const int frecLlama = 1000;   // Hz
const int frecTilt  = 400;   // Hz

unsigned long ultimoCambio = 0;
bool estadoLed = false;

// Alterna el LED cada "intervalo" ms sin bloquear el programa
void parpadear(unsigned long intervalo) {
  if (millis() - ultimoCambio >= intervalo) {
    ultimoCambio = millis();
    estadoLed = !estadoLed;
    digitalWrite(pinLed, estadoLed);
  }
}

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);
  Serial.begin(9600);  // Opcional: para calibrar
}

void loop() {
  int valorLlama = analogRead(pinLlama);
  int valorTilt  = analogRead(pinTilt);

  Serial.print("Llama: ");
  Serial.print(valorLlama);
  Serial.print("  Tilt: ");
  Serial.println(valorTilt);

  if (valorLlama < umbralLlama) {
    // ALARMA DE LLAMA: tono continuo y parpadeo rápido
    tone(pinBuzzer, frecLlama);
    parpadear(100);
  }
  else if (valorTilt > umbralTilt) {
    // ALARMA DE TAMBALEO: tono continuo y parpadeo lento
    tone(pinBuzzer, frecTilt);
    parpadear(500);
  }
  else {
    // Todo normal
    noTone(pinBuzzer);
    digitalWrite(pinLed, LOW);
    estadoLed = false;
  }
}
