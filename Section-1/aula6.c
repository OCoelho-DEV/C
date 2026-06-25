#include <stdlib.h>
#include <stdio.h>

int main(){
    char sexo;
    printf("Digite [f] para feminino e [m] para masculino\n");
    scanf("%c", &sexo);
    printf("Sexo: %c\n", sexo);

    return 0;
}