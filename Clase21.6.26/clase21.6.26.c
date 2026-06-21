#include <string.h>
#include <stdio.h>

int main(){
    char nombre[20]; // = "Antonio" -> A n t o n i o \0
    char destino[50] = "Adios";
    char* fuente = "chicos";

    int longitud, comparacion;

    char* st1 = "Hola mundo";
    char* st2 = "Hola";

    // Recepción de strings del usuario
    // fgets(char* destino, int tamaño, stdin)
    fgets(nombre, 20, stdin); // = A n t o n i o \n \0

    // Longitud del string deseado
    // strlen(char* string);
    longitud = strlen(nombre);

    // Copia de un string a otro
    // strcpy(char* destino, char* fuente);
    strcpy(destino, nombre);

    printf("%s %d \n", destino, longitud); 

    // Comparación de st1 y st2 (0 = iguales, 1 = diferentes)
    // strcmp(char* st1, char* st2, int numCharsComparados);
    comparacion = strncmp(st1, st2, strlen(st1));

    switch(comparacion){
        case 0:
            printf("Son iguales\n");
            break;;
        default:     
            printf("No son iguales\n");
            break;
    } 

    // Concatenación de st2 a st1
    // strcat(char* st1, char* st2);
    strcat(destino, " ");
    strcat(destino, fuente);
    strcat(fuente, destino);
 
    printf("%s \n", destino);
    printf("%s \n", fuente);       

    return 0;
}