#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int ingreso=0;
    int gastos=0;
    int formula=0;	
	
    printf("Introduce sus ingresos en el mes: ");scanf("%d",&ingreso);
    printf("Introduce sus gastos en el mes: ");scanf("%d",&gastos);
    formula=ingreso-gastos;

    if(formula>1){
        printf("Su negocio es rentanble sus ingresos fueron de: %d$ y sus gastos de: %d$, le quedan de ganancias: %d$",ingreso,gastos,formula);
    }
    else{
            printf("Su negocio no es rentanble sus ingresos fueron de: %d$ y sus gastos de: %d$, tiene un defecit de:%d $",ingreso,gastos,formula);
        }	

	return 0;
}