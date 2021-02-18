#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int pares=0;
    int suma_pares=0;
    int impares=0;
    int suma_impares=0;
    int saber=0;
    //int nota_mala=0;	
	
    for (int a=1;a<101;a++){
        saber=a%2;
        if(saber==0){
            pares=pares+1;
            suma_pares=suma_pares+a;
        }
        else{
            impares=impares+1;
            suma_impares=suma_impares+a;
        }
    }	
	printf("\n---------------\n");	
	printf("La suma de los pares es: %d y hay %d numeros pares",suma_pares,pares);
    printf("\nLa suma de los impares es: %d y hay %d numeros impares",suma_impares,impares);
	return 0;
}