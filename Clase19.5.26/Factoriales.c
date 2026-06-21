#include <stdio.h>

int calcularFactorial(int num);
int calcularCombinaciones(int n, int m);
int calcularVariaciones(int n, int m);

int main(void){
    long long n = 0, m = 0; 
    float variaciones = 0, combinaciones = 0;
    int bucle = 1;

    do{
        printf("Introduzca un numero entero positivo: \n");
        printf("> ");
        scanf("%d", &n);

        printf("Introduzca otro numero entero positivo: \n");
        printf("> ");
        scanf("%d", &m);

        if(n > 0 && m >= n) bucle = 0;
        else {
            printf("ERROR: Valor no valido introducido! \n");

            if(n > m) printf("El segundo valor debe ser mayor o igual que el primero! \n");

            n = 0;
            m = 0; 
        }
    } while(bucle == 1);

    variaciones = calcularVariaciones(n,m);
    combinaciones = calcularCombinaciones(n,m);

    printf("variaciones posibles de %d y %d: %.2f \n", n, m, variaciones);
    printf("combinaciones posibles de %d y %d: %.2f \n", n, m, combinaciones);
}

int calcularFactorial(int num){
    if(num <= 1) return 1;

    return calcularFactorial(num-1) * num;
}

int calcularCombinaciones(int n, int m){
    int mFactorial = calcularFactorial(m), nFactorial = calcularFactorial(n); 

    return mFactorial / (nFactorial * calcularFactorial(m-n));
}

int calcularVariaciones(int n, int m){
    int mFactorial = calcularFactorial(m); 

    return mFactorial / (calcularFactorial(m-n));
}