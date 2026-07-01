#include <stdlib.h>
#include <stdio.h>

int main(){
    int idade;
    float peso, altura;

    printf("igite sua idade, seu peso e altura:");
    scanf("%d %f %f", &idade, &peso, &altura);
    printf("Idade: %d\nPeso: %f\nAltura: %f\n", idade, peso, altura);

    return 0;
}