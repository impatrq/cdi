# Especificaciones

1- Implementar en un archivo `cajero.c` un programa que:
- Pida un monto de dinero a retirar (entre 20 y 5000).
- Imprima un mensaje indicando cuantos billetes de cada denominacion va a entregar. Los billetes disponibles son: `1`, `5`, `10`, `20`, `50` y `100`.
- Si el monto solicitado fue menor al minimo, indicarlo con un mensaje y terminar el programa (`return 1`).
- Si el monto solicitado fue mayor al maximo, indicarlo con un mensaje y terminar el programa (`return 2`).
- El programa debe priorizar entregar la cantidad de billetes mas optima.

2- Luego, escribir un `README.md` con lo siguiente:

```markdown
# Cajero

Alumno: Nombre y apellido
Curso: Curso
Materia: Control de Interfaces

Colaboradores: Alumnos con los que trabajaron
```

## Orientación

- Van a necesitar usar [condicionales](https://www.w3schools.com/c/c_conditions.php) y [bucles](https://www.w3schools.com/c/c_while_loop.php).
- El resultado debe ser similar al siguiente:

```c
Ingrese un monto a retirar: 2345
Monto aceptado!
Billetes de 100: 23
Billetes de 50: 0
Billetes de 20: 2
Billetes de 10: 0
Billetes de 5: 1
Billetes de 1: 0
```

## Como probar el código

Abrir una terminal y escribir:

```
gcc -o cajero cajero.c
./cajero
```

## Como entregar

1- Crear un repositorio nuevo con el nombre `cdi-02`
2- Subir el `README.md` y el `cajero.c`
