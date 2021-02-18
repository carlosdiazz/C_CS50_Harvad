#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int nota_buena=0;
    int nota=0;
    int nota_mala=0;	
	
    for (int a=1;a<11;a++){
        printf("Introduce la nota del estudiante #%d: ",a);scanf("%d",&nota);

        if(nota>65){
            nota_buena=nota_buena+1;
        }
        else{
            nota_mala=nota_mala+1;
        }
    }	
	printf("\n---------------\n");	
    printf("La cantidad de nota con mas de 65 es: %d",nota_buena);
    printf("\nLa canttidad de nota con mneos de 65 es: %d",nota_mala);	
	return 0;
}