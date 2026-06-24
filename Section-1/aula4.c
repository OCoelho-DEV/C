#include <stdlib.h>
#include <stdio.h>

int main(){
    int var1, var2;

    printf("Digit 2 int values:\n");
    scanf("%d", &var1);
    scanf("%d", &var2);

    printf("%d + %d = %d\n", var1, var2, var1 + var2);
    printf("%d - %d = %d\n", var1, var2, var1 - var2);
    printf("%d * %d = %d\n", var1, var2, var1 * var2);
    printf("%d / %d = %d\n", var1, var2, var1 / var2);
    
    return 0;
}