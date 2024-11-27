// Constantes para intervalos en microsegundos
const unsigned long INTERVAL_CTR1 = 100000;  // 100 ms
const unsigned long INTERVAL_CTR2 = 2000000; // 2 segundos

// Contadores
int ctr1 = 0;
int ctr2 = 0;

// Tiempos previos para los contadores
unsigned long last_time_ctr1 = 0;
unsigned long last_time_ctr2 = 0;

void setup() {
  // Inicializar la comunicación serie a 9600 baudios
  Serial.begin(9600);
}

void loop() {
  
  unsigned long current_time = micros();


  if( (current_time - last_time_ctr1) >= INTERVAL_CTR1) {  // Incrementar ctr1 cada 100 ms (100,000 microsegundos)
    updateCtr1(current_time);

    printCounters();
  }

  // Incrementar ctr2 cada 2 segundos
  if ((current_time - last_time_ctr2) >= INTERVAL_CTR2) { // Incrementar ctr2 cada 2 segundos (2,000,000 microsegundos)
      updateCtr2(current_time);
  }
}

// Actualizar ctr1
void updateCtr1(unsigned long current_micros) {
  ctr1++;
  last_time_ctr1 = current_micros; // Actualizar el último tiempo de ctr1
}

// Actualizar ctr2
void updateCtr2(unsigned long current_micros) {
  ctr2++;           // Incrementar ctr2
  ctr1 -= ctr2;     // Restar ctr2 del valor actual de ctr1
  last_time_ctr2 = current_micros; // Actualizar el último tiempo de ctr2
}

void printCounters() {
    Serial.print("C1: ");
    Serial.print(ctr1);
    Serial.print(" C2: ");
    Serial.println(ctr2);
}
