# Especificaciones

Escribir un programa que: 
  - Tome como entrada el nombre de uno de los archivos en la carpeta `texts` (sin extensión).
  - Cuente la cantidad de letras, palabras y oraciones en el texto.
  - Calcule el grado de dificultad del texto en base a la siguiente [formula](https://en.wikipedia.org/wiki/Coleman%E2%80%93Liau_index#:~:text=The%20Coleman%E2%80%93Liau%20index%20is,necessary%20to%20comprehend%20the%20text.):

```
index = 0.0588 * L - 0.296 * S - 15.8
```

Donde: `L` es la cantidad de letras cada 100 palabras y `S` es la cantidad de oraciones cada 100 palabras.

  - Imprima el grado de dificultad del texto teniendo en cuenta que:
    - Si da un grado menor a uno se imprima `Before Grade 1`.
    - Si da mayor a 16, se imprima `Grade 16+`.
    - Cualquier caso intermedio, se redondea el resultado de la cuenta anterior al entero mas cercano. Ejemplo, si da 13.2 se imprime `Grade 13` y si da 2.6 se imprime `Grade 3`.

Luego, armar un `README.md` con lo siguiente:

```markdown
# Readability

Alumno: Nombre y apellido
Curso: Curso
Materia: Control de Interfaces

Colaboradores: Alumnos con los que trabajaron
```

## Orientacion

- Para detectar una letra pueden usar la funcion `isalpha()` de la biblioteca `ctype.h` que devuelve `true` si el caracter es alfabetico. Ejemplos [aqui](https://www.programiz.com/c-programming/library-function/ctype.h/isalpha).
- Consideren que una palabra es cuando detectan un espacio y una oración cuando detectan alguno de estos caracteres: `.`, `!` o `?`.
- Pueden usar la función `isspace()` de la biblioteca `ctype.h` que devuelve `true` si el el caracter es un espacio. Algunos ejemplos [aquí](https://www.programiz.com/c-programming/library-function/ctype.h/isspace).
- Pueden aprovechar el fin de cadena o caracter nulo `\0` para hacer algo como esto:

```c
int i = 0;

while (text[i] != '\0') {
  ...
  i++;
}
```

## Como probar el código

Abrir una terminal y escribir:

```
gcc -o readability readability.c
./readability text
```

Donde `text` es el nombre de uno de los archivos (sin extension) que se encuentran en la carpeta `texts`.

El resultado esperado debe coincidir con lo que indiquen los nombres de los archivos.

## Como entregar

- Crear un repositorio nuevo con el nombre `cdi-03`.
- Subir el `README.md` y el `cajero.c`.
