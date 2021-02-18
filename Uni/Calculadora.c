#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int nu1=0,nu2=0,ope=0,op=0;
	
	printf("Introduce su Primer  numero: ");scanf("%d",&nu1);
	printf("Introduce su Segundo numero: ");scanf("%d",&nu2);
	
	printf("\n 1- para sumar");
	printf("\n 2- para restar");	
	printf("\n 3- para dividir");	
	printf("\n 4- para multiplicar");
	
	printf("\n \n Que deseas hacer: ");scanf("%d",&op);	

	switch (op){
		
		case 1: printf(" La Suma es: %d",nu1+nu2);break;
		
		case 2: printf(" La Resta es: %d",nu1-nu2);break;
		
		case 3: if (nu2==0){
			
				printf("No se puede dividir entre 0");
				break;
				}
				
				else{
					printf(" La Division es: %d",nu1/nu2);break;
				}
		
		case 4: printf(" La multiplicacion es: %d",nu1*nu2);break;
		
	}
	return 0;
}
