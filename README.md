# Especificaciones

1- Implementar en un archivo `hello.c` un programa que:
- Imprima un mensaje pidiendo el nombre de la persona que ejecuta el programa.
- Imprima un mensaje saludando a la persona que ingresó el nombre.

2- Luego, escribir un `README.md` con lo siguiente:

```markdown
# Hello

Alumno: Nombre y apellido
Curso: Curso
Materia: Control de Interfaces

Colaboradores: Alumnos con los que trabajaron
```

## Orientación

- Van a necesitar trabajar con un tipo de dato especial, una cadena de caracteres, que en otros lenguajes se denomina `string`. No vamos a entrar en detalles ahora en lo que es una cadena de caracteres, pero vamos a declararla de la siguiente forma:

```c
/* Puedo almacenar hasta 20 caracteres */
char name[20];
```

- Para tratar con esta cadena, sugerimos la función `scanf`:

```c
/* name es la variable donde queremos que se guarde el texto */
scanf("%s", name);
```

## Como probar el código

Abrir una terminal y escribir:

```
gcc -o hello hello.c
./hello
```

## Como entregar

1- Crear una rama nueva con el nombre `cdi-01`

2- Subir el `README.md` y el `hello.c`
