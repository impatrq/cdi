#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 4096

int read_file(char *text, char *filename);

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Uso: ./readability file\n");
        return 1;
    }

    char text[MAX];

    if (read_file(text, argv[1])) {
        printf("Archivo no encontrado\n");
        return 1;
    }

    // TODO

    return 0;
}

int read_file(char *text, char *filename) {

    FILE *fp;
    char c;
    char full_name[30];
    
    sprintf(full_name, "texts/%s.txt", filename);
    fp = fopen(full_name, "r");
    
    if (!fp) {
        return 1;
    } 
    
    do {
        c = getc(fp);
        *text = c;
        text++;
    } while (c != EOF);
    
    text--;
    *text = '\0';
    
    return 0;
}
