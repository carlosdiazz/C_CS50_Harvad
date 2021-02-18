#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int primos=0;	
    int confirmar=0;
    int confirmar2=0;
	printf("Ingrese un numero para saber si es primo: ");scanf("%d",&primos);

    if(primos==1){
        printf("El numero que ingreso el: %d es primo",primos);
        }
    else{
        for (int a=1;a<primos+1;a++){
            confirmar=primos%a;

            if(confirmar==0){
                confirmar2=confirmar2+1;
            }

        }	
	
        if (confirmar2==2){
            printf("El numero que ingreso el: %d es primo",primos);
        }
        else{

            printf("El numero que ingreso el: %d no es primo",primos);
        }
        }
	return 0;
}