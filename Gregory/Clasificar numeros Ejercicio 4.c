#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero_positivo=0;
    int numero=0;
    int numero_negativo=0;	
	
    for (int a=1;a<16;a++){
        printf("Introduce un numero: ");scanf("%d",&numero);

        if(numero>=0){
            numero_positivo=numero_positivo+1;
        }
        else{
            numero_negativo=numero_negativo+1;
        }
    }	
	printf("\n---------------\n");	
    printf("La cantidad de numero positivo es: %d",numero_positivo);
    printf("\nLa canttidad de numero negativo es: %d",numero_negativo);	
	return 0;
}