// Declarar variables para los contadores
int ctr1 = 0;
int ctr2 = 0;

void setup() {
  // Inicializar la comunicación serie a 9600 baudios
  Serial.begin(9600);
}

void loop() {
  // Incrementar ctr1 cada 100 ms
  ctr1++;

  static int tiempo_ctr2 = 0;
  tiempo_ctr2 += 100; // Incrementar el tiempo transcurrido

  // Incrementar ctr2 cada 2 segundos
  if (tiempo_ctr2 >= 2000) {
    ctr2++;           
    ctr1 -= ctr2;     
    tiempo_ctr2 = 0;  // Reiniciar el temporizador
  }

  Serial.print("C1: ");
  Serial.print(ctr1);
  Serial.print(" C2: ");
  Serial.println(ctr2);

  // Esperar 100 ms antes del siguiente ciclo
  delay(100);
}
