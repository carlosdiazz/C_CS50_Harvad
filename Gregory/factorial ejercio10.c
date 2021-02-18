#include <stdio.h>
#include <stdlib.h>

int main()
{

    int total=0;
    int factorial;


    printf("Introduzca 3 para calcular el factorial : "); scanf(" %d", &factorial);
    // Calcular el factorial del numero solicitado
    total = 1;
    while(factorial > 1) {
       total *= factorial;
       printf(" %d x",factorial);
       factorial--;
    }
    printf(" 1 = %d\n\n",total);

  return 0;
}