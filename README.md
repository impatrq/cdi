# Especificaciones

Escribir un programa para la Raspberry Pico que: 
  - Muestre en un display 7 segmentos valores del 0 al 9 (arrancando en 0).
  - Al presionar un pulsador, el valor mostrado debe incrementarse.
  - Al presionar un segundo pulsador, el valor mostrado debe decrementarse.
  - Con un tercer pulsador, el valor debe resetearse.
  - El valor mostrado nunca salirse del rango 0 a 9.

Luego, armar un `README.md` con lo siguiente:

```markdown
# 7 Segmentos

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

- Pinout de un 7 segmentos:

![7segment][7segment]

- Puede ser util diagramar una tabla con los valores necesarios para formar cada numero. Esta tabla puede verse asi (suponiendo que G el mas significativo):

|Numero|G|F|E|D|C|B|A|Hex|
|---|---|---|---|---|---|---|---|---|
|0|1|1|1|1|1|1|0|0x3f|

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

- Crear un repositorio con el nombre `cdi-05`.
- Subir el `README.md` y `main.c`.

[rp2040]: https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf
[pico]: https://datasheets.raspberrypi.com/pico/pico-datasheet.pdf
[sdk]: https://datasheets.raspberrypi.com/pico/raspberry-pi-pico-c-sdk.pdf
[pinout]: https://www.raspberrypi.com/documentation/microcontrollers/images/pico-pinout.svg
[7segment]: https://protosupplies.com/wp-content/uploads/2018/02/7-Segment-CA-Pinout-2.jpg
