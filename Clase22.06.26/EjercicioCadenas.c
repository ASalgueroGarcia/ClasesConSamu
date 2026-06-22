#include <string.h>
#include <stdio.h>

#define MAX_FRASE 200

void solicitarFrase(char* st, int* num);

int main(){
    char st[MAX_FRASE] = "";
    char res[MAX_FRASE] = "";
    int numFrases = 0;

    while (strcmp(st, "aaa") != 0)
    {
        solicitarFrase(st, &numFrases);

        if(strcmp(st, "aaa") != 0 && strlen(st) > strlen(res)) strcpy(res, st);
    }

    if(numFrases >= 2) printf("La frase mas larga es: %s", res);

    return 0;
}

void solicitarFrase(char* st, int* num){
    printf("Introduzca una frase: \n > ");

    fgets(st, MAX_FRASE, stdin);

    size_t len = strlen(st);
    if(len > 0 && st[len - 1] == '\n') st[len - 1] = '\0';

    if(strcmp(st, "aaa") != 0) (*num)++;
}