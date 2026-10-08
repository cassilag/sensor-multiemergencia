#include <Buzzer.h>

const int ledPIN = 2;
Buzzer buzzer(8, 11);

void setup() {
  Serial.begin(9600);
  pinMode(ledPIN, OUTPUT);
}

// Función auxiliar para emitir tono y encender LED al mismo tiempo
void reproducirNota(int nota, int duracion) {
  digitalWrite(ledPIN, HIGH);      // Encender LED
  buzzer.sound(nota, duracion);    // Tocar nota
  digitalWrite(ledPIN, LOW);       // Apagar LED
}

void loop() {
  int time = 500;
  buzzer.begin(10);

  // Ejemplo: Fragmento de la canción con destellos en cada nota
  reproducirNota(NOTE_G3, time / 2);
  reproducirNota(NOTE_E4, time / 2);
  reproducirNota(NOTE_D4, time / 2);
  reproducirNota(NOTE_C4, time / 2);
  reproducirNota(NOTE_G3, time * 2);

  // Jingle Bells con destellos
  reproducirNota(NOTE_E4, time / 2);
  reproducirNota(NOTE_E4, time / 2);
  reproducirNota(NOTE_E4, time);

  buzzer.end(2000); // Pausa al final de la melodía
}
