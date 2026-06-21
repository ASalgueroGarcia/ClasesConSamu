#include <string.h>
#include <stdio.h>

int main(){
    char nombre[20]; // = "Antonio" -> A n t o n i o \0
    char destino[50] = "Adios";
    char* fuente = "chicos";

    int longitud, comparacion;

    char* st1 = "Hola mundo";
    char* st2 = "Hola";

    strcat(destino, " ");
    strcat(destino, fuente);
    strcat(fuente, destino);
 
    printf("%s \n", destino);
    printf("%s \n", fuente);

    /*
    comparacion = strncmp(st1, st2, strlen(st1));

    switch(comparacion){
        case 0:
            printf("Son iguales\n");
            break;;
        default:     
            printf("No son iguales\n");
            break;
    }        

    fgets(nombre, 20, stdin); // = A n t o n i o \n \0

    longitud = strlen(nombre);
    strcpy(destino, nombre);

    printf("%s %d \n", destino, longitud); 
    */

    return 0;
}