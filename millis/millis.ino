// Declarar una variable para almacenar el contador de incrementos
int counter = 0;

// Almacenar el tiempo de la última actualización en milisegundos
uint64_t last_update_time = 0;

const int INTERVAL = 1000; // Intervalo de 1 segundo

void setup() {
  // Inicializar la comunicación serie a 9600 baudios
  Serial.begin(9600);
}

void loop() {
  handleCounter();
}

void handleCounter() {
  uint64_t current_time  = millis();

  if((current_time  - last_update_time) > INTERVAL) {// Esperar 1 segundo (1000 milisegundos)
    counter++;
    Serial.print("Counter: ");
    Serial.println(counter);
    last_update_time = current_time;
  }
}