# Ejercicios Microcontroladores

Este repositorio contiene una serie de ejercicios diseñados para practicar conceptos con microcontroladores. A medida que este completado cada ejercicio, su casilla correspondiente estará marcada en el checklist.

## Checklist de Ejercicios

- [x] **hello_world**  
       Imprimir "Hello World" continuamente en el monitor serie.

- [x] **delay**

  - Incrementar un contador e imprimirlo por el monitor serie cada segundo usando `delay()`.

- [x] **delay_2**

  - Incrementar el contador `ctr1` 10 veces por segundo.
  - Incrementar el contador `ctr2` 1 vez cada 2 segundos.
  - Restar el valor de `ctr2` al de `ctr1` cuando `ctr2` se incremente.
  - Imprimir los valores con el formato `C1: {valor ctr1} C2: {valor ctr2}`.

- [x] **millis**  
       Repetir el ejercicio **delay**, pero utilizando `millis()` en lugar de `delay()`.

- [x] **micros**  
       Repetir el ejercicio **delay_2**, pero utilizando `micros()` en lugar de `delay()`.

- [x] **echo**

  - Recibir datos por la conexión serie.
  - Cambiar mayúsculas por minúsculas y viceversa antes de reenviar los datos.

- [ ] **Aplicación de línea de comandos**  
       Implementar un menú interactivo por puerto serie con las siguientes opciones:
  - `H` o `h`: Mostrar el menú de ayuda.
  - `START` o `start`: Publicar un valor cada segundo.
  - `STOP` o `stop`: Detener la publicación.
  - `T` o `t`: Cambiar el período de publicación (1 a 10 veces por segundo).
  - `M` o `m`: Cambiar entre los modos **fijo** (valor constante) y **alternativo** (alternar entre `0` y `1`).

---

## Cómo usar este repositorio

1. Clona este repositorio en tu máquina local:
   ```bash
   git clone https://github.com/juanfer112/microcontroller.git
   ```
