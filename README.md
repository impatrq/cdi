# Especificaciones

Escribir un programa para la Raspberry Pico que: 
  - Lea el estado de un pin de entrada que va a estar conectado a un pulsador.
  - Mientras el pulsador este presionado, el built in LED de la Raspberry Pico (GPIO25) tiene que parpadear cada 500 ms.
  - Cuando el pulsador se suelte, el LED debe dejar de parpadear y quedar en el ultimo estado que se encontraba.

Luego, armar un `README.md` con lo siguiente:

```markdown
# GPIO

Alumno: Nombre y apellido
Curso: Curso
Materia: Control de Interfaces

Colaboradores: Alumnos con los que trabajaron
```

## Orientacion

- Datasheet del [RP2040][rp2040].
- Datasheet de la [Raspberry Pico][pico].
- Raspberry Pico [SDK][sdk] para C/C++.
- Pinout de la Raspberry Pico:

![pinout][pinout]

## Como compilar y grabar el programa

- Abrir la consola de comandos dentro del directorio del proyecto y escribir:

```bash
mkdir build
cd build
cmake -G "MinGW Makefiles" ..
make
```

- Conectar la Raspberry Pico a la computadora precionando el boton de BOOTSEL y esperar a que aparezca como un dispositivo de almacenamiento.
- Luego, entrar a build y buscar el archivo `gpio.uf2` y copiarlo en la Raspberry Pico.

## Entrega

- Crear un repositorio con el nombre `cdi-04`.
- Subir el `README.md` y `main.c`.

[rp2040]: https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf
[pico]: https://datasheets.raspberrypi.com/pico/pico-datasheet.pdf
[sdk]: https://datasheets.raspberrypi.com/pico/raspberry-pi-pico-c-sdk.pdf
[pinout]: https://www.raspberrypi.com/documentation/microcontrollers/images/pico-pinout.svg
