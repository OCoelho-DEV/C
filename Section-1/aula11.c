#include <stdlib.h>
#include <stdio.h>

int main(){
    char sexo[1024];
    int idade;
    float peso, altura;

    printf("Digite seu Sexo, Peso, Idade e Altura:\n");
    scanf("%s %f %d %f", &sexo, &peso, &idade, &altura);
    printf("Sexo: %s\nPeso: %f\nIdade: %d\nAltura: %f",
    sexo, peso, idade, altura);
    return 0;
}