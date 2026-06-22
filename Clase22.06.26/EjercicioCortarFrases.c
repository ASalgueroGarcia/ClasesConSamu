#include <string.h>
#include <stdio.h>

#define MAX_FRASE 200

int divideCadena(char* frase, int posCorte, char* parte1, char* parte2);

int main(){
    char st[MAX_FRASE];
    char parte1[MAX_FRASE];
    char parte2[MAX_FRASE];
    int posCorte = 0, division = 0;

    printf("Introduzca una cadena para dividr: \n > ");
    fgets(st, MAX_FRASE, stdin);
    printf("Introduzca una posicion de corte: \n > ");
    scanf("%d", &posCorte);

    if(posCorte > strlen(st) || posCorte <= 0) posCorte = strlen(st) / 2;

    division = divideCadena(st, posCorte, parte1, parte2);

    switch (division)
    {
    case 0: // exito
        printf("La frase queda en: \"%s\" y \"%s\".", parte1, parte2);
        break;
    default: // fallo
        printf("ERROR: Frase no dividida correctamente!");
        break;
    }
}

int divideCadena(char* frase, int posCorte, char* parte1, char* parte2){
    int pos1 = 0, pos2 = 0;

    for (int i = 0; i < strlen(frase); i++)
    {
        if(i <= posCorte){
            parte1[pos1] = frase[i];
            pos1++;
        }
        else {
            parte2[pos2] = frase[i];
            pos2++;
        }
    }
    
    return 0;
}