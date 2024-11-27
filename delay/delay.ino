// Declarar una variable para el contador
int counter = 0;

void setup() {
  // Inicializar la comunicación serie a 9600 baudios
  Serial.begin(9600);
}

void loop() {
  
  counter++;
  
  Serial.println("Counter:");
  Serial.println(counter);
  
  // Esperar 1 segundo (1000 milisegundos)
  delay(1000);
}
