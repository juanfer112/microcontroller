const int SERIAL_BAUD_RATE = 9600;      // Velocidad de comunicación serial
const int SERIAL_NO_DATA = 0;           // Indica que no hay datos disponibles

const char NEWLINE_CHAR = '\n';         // Carácter de nueva línea
const char CARRIAGE_RETURN_CHAR = '\r'; // Carácter de retorno de carro
const char INVALID_INPUT_MESSAGE[] = "Entrada no válida: Solo se permiten letras.";

void setup() {
  Serial.begin(SERIAL_BAUD_RATE);
}

void loop() {
  // Verificar si hay datos disponibles en el puerto serie
  if (Serial.available() > SERIAL_NO_DATA) {
    char modified_char;
    char received_char  = Serial.read();
    
    // Ignorar caracteres no deseados como '\n' y '\r'
    if (received_char == NEWLINE_CHAR || received_char == CARRIAGE_RETURN_CHAR) {
      return; // Salir de la función loop() y no procesar estos caracteres
    }
    
    if (isalpha(received_char)) {

      modified_char = isupper(received_char) ? tolower(received_char) : toupper(received_char);

      validInputPrinter(received_char, modified_char);

    } else {

      noValidInputPrinter(received_char);

    }
  }
}

// Notificar al usuario si la entrada no es válida
void noValidInputPrinter(char no_valid_received_char) {
      Serial.print(INVALID_INPUT_MESSAGE);
      Serial.print(" Carácter recibido: ");
      Serial.println(no_valid_received_char); 
}

// Imprimir el carácter original y el modificado
void validInputPrinter(char valid_received_char, char modified_char) {
      Serial.print("Original: ");
      Serial.print(valid_received_char);
      Serial.print(" -> Modificado: ");
      Serial.println(modified_char);
}
