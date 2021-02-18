#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int contador=0;
	
	while(contador<=5)
	{
		printf("\nEl numero es: %i",contador);
		contador=contador+1;
	}
	
	for (contador=0;contador<=5;contador=contador+1)
	{
		printf("\nEl numero es: %i",contador);
	}
	//contador=0;
	do{
		printf("\nEl numero es: %i",contador);
		contador=contador+1;
	}while(contador<=10);
	
	return 0;
}
