#include <string.h>
#include <stdio.h>

#define MAX_FRASE 200

void solicitarFrase(char* st, int* num);

int main(){
    char st[MAX_FRASE] = NULL;
    char res[MAX_FRASE] = "";
    int numFrases = 0;

    while (strcmp(st, "aaa") != 0)
    {
        solicitarFrase(st, &numFrases);

        if(strlen(st) > strlen(res)) strcpy(res, st);
    }
    
    if(numFrases >= 2) printf("La frase mas larga es: %s", res);

    return 0;
}

void solicitarFrase(char* st, int* num){
    printf("Introduzca una frase: \n > ");

    fgets(st, MAX_FRASE, stdin);

    if(st[strlen(st) - 1] == '\n' && strlen(st) >= 0) st[strlen(st) - 1] = '\0';

    if(strcmp(st, "aaa") != 0) (*num)++;
}