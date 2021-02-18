#include <stdio.h>
#include <stdlib.h>

int main(){	
	int contador=1;
	
	printf("Ciclo For");
	//Ciclo For
	for (contador;contador<1000;contador=contador+contador)
	{
		printf("\n%d",contador);
		if (contador==8){
			printf("\nOk ya esta");
			contador=1;
			break;
		}
		}
	
	printf("\nCiclo While");
	//Ciclo While		
	while(contador<=10)
	{
		printf("\n%d",contador);
		contador++;
		}	
	printf("\nCiclo do While");
	
	//Ciclo Do While
	contador=0;
	
	do{
		printf("\n%d",contador);
		contador=contador+3;
		
	}while(contador<=15);
	
	
	return 0;
}
