const int pinLlama  = A0;   // Sensor de llama
const int pinTilt   = A1;   // Sensor de tilt
const int pinBuzzer = 11;   // Buzzer

// LED RGB
const int pinRojo  = 0;
const int pinVerde = 1;
const int pinAzul  = 2;     // No se usa: se mantiene apagado

const bool ANODO_COMUN = false;  // true si tu LED RGB es de ánodo común

const int umbralLlama = 200;  // Llama detectada si valor < 200
const int umbralTilt  = 100;  // Tambaleo detectado si valor > 100

// ---- COLORES SEGÚN LA LLAMA (menor valor = fuego más cerca) ----
const int llamaRojo     = 40;    // Valor menor a este: ROJO
const int llamaAmarillo = 100;   // Valor menor a este: AMARILLO; si no, VERDE

// ---- COLORES SEGÚN EL TILT (mayor valor = tambaleo más fuerte) ----
const int tiltAmarillo = 350;    // Valor mayor a este: AMARILLO
const int tiltRojo     = 600;    // Valor mayor a este: ROJO; si no, VERDE

// Frecuencias alrededor de 1000 Hz (donde tu buzzer suena más fuerte)
const int frecLlama = 1000;   // Hz
const int frecTilt  = 400;    // Hz

// Colores posibles
const int APAGADO = 0;
const int VERDE = 1;
const int AMARILLO = 2;
const int ROJO = 3;

unsigned long ultimoCambio = 0;
bool estadoLed = false;

void setColor(bool r, bool g) {
  if (ANODO_COMUN) { r = !r; g = !g; }
  digitalWrite(pinRojo, r);
  digitalWrite(pinVerde, g);
  digitalWrite(pinAzul, ANODO_COMUN ? HIGH : LOW);  // Azul siempre apagado
}

void mostrarColor(int color) {
  switch (color) {
    case VERDE:    setColor(false, true);  break;
    case AMARILLO: setColor(true, true);   break;
    case ROJO:     setColor(true, false);  break;
    default:       setColor(false, false); break;
  }
}

// Parpadea cada "intervalo" ms; cuando está encendido muestra el color indicado
void parpadear(unsigned long intervalo, int color) {
  if (millis() - ultimoCambio >= intervalo) {
    ultimoCambio = millis();
    estadoLed = !estadoLed;
  }
  mostrarColor(estadoLed ? color : APAGADO);
}

void setup() {
  // Sin Serial: los pines 0 y 1 (RX/TX) están ocupados por el LED
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);
  mostrarColor(APAGADO);
}

void loop() {
  int valorLlama = analogRead(pinLlama);
  int valorTilt  = analogRead(pinTilt);

  if (valorLlama < umbralLlama) {
    // ALARMA DE LLAMA: rojo (cerca) -> amarillo -> verde (lejos)
    int color;
    if (valorLlama < llamaRojo)          color = ROJO;
    else if (valorLlama < llamaAmarillo) color = AMARILLO;
    else                                 color = VERDE;

    tone(pinBuzzer, frecLlama);
    parpadear(100, color);
  }
  else if (valorTilt > umbralTilt) {
    // ALARMA DE TAMBALEO: verde (leve) -> amarillo -> rojo (fuerte)
    int color;
    if (valorTilt > tiltRojo)          color = ROJO;
    else if (valorTilt > tiltAmarillo) color = AMARILLO;
    else                               color = VERDE;

    tone(pinBuzzer, frecTilt);
    parpadear(500, color);
  }
  else {
    // Todo normal
    noTone(pinBuzzer);
    mostrarColor(APAGADO);
    estadoLed = false;
  }
}
