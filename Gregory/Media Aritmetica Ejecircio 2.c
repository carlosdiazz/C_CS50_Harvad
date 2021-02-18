#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int salario=0;
	int total=0;	
	int promedio=0;
	
    for (int i=1;i<16;i++){
	printf("Ingrese el sario # %d: ",i);scanf("%d",&salario);
	total=total+salario;	
    }
    promedio=total/15;
	printf("\nLa suma total de los salario es: %d su media aritmetica es: %d \n",total,promedio);	
    		
	return 0;
}