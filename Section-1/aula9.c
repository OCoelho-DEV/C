#include <stdlib.h>
#include <stdio.h>

int main(){
    char sexo;
    printf("Digite f para feminino ou m para masculino: ");
    sexo = fgetc(stdin);
    printf("Sexo: %c\n", sexo);

    return 0;
}