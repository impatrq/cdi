# Especificaciones

Escribir un programa para la Raspberry Pico que: 
  - Lea el estado de cuatro pulsadores.
  - Muestre en la primer fila de un display 16x2 los pulsadores que estan abiertos.
  - Muestre en la segunda fila los pulsadores que estan cerrados o apretados.

Ejemplo, si los pulsadores conectados a los pines 4 y 6 estan cerrados pero los conectados a los pines 5 y 7 estan abiertos, el display deberia decir algo como:

```
Abiertos:5|7
Cerrados:4|6
```

Luego, armar un `README.md` con lo siguiente:

```markdown
# LCD 16x2

Alumno: Nombre y apellido
Curso: Curso
Materia: Control de Interfaces

Colaboradores: Alumnos con los que trabajaron
```

## Orientacion

- Datasheet del [RP2040][rp2040].
- Datasheet de la [Raspberry Pico][pico].
- Raspberry Pico [SDK][sdk] para C/C++.
- Ejemplo de Wokwi de un [LCD16x2][ejemplo]
- Pinout de la Raspberry Pico:

![pinout][pinout]

- Recuerden que solo tienen hasta 16 caracteres para escribir en una fila.

## Como compilar y grabar el programa

- Abrir la consola de comandos dentro del directorio del proyecto y escribir:

```bash
mkdir build
cd build
cmake -G "MinGW Makefiles" ..
make
```

- Conectar la Raspberry Pico a la computadora precionando el boton de BOOTSEL y esperar a que aparezca como un dispositivo de almacenamiento.
- Luego, entrar a build y buscar el archivo `lcd.uf2` y copiarlo en la Raspberry Pico.

## Entrega

- Crear un repositorio con el nombre `cdi-06`.
- Subir el `README.md` y `main.c`.

[rp2040]: https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf
[pico]: https://datasheets.raspberrypi.com/pico/pico-datasheet.pdf
[sdk]: https://datasheets.raspberrypi.com/pico/raspberry-pi-pico-c-sdk.pdf
[pinout]: https://www.raspberrypi.com/documentation/microcontrollers/images/Pico-R3-SDK11-Pinout.svg
[ejemplo]: https://wokwi.com/projects/336854839535338066
