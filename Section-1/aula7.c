#include <stdlib.h>
#include <stdio.h>

int main(){
    char sexo;
    printf("Digite f para feminino ou m para masculino: ");
    sexo = getchar();
    printf("Sexo: %c\n", sexo);
    printf("ASCII code: %d\n", sexo);
    printf("Letra m: %c\n", 109);
    return 0;
}