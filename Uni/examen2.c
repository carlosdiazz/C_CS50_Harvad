#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int base=0,altura=0,area=0,peso=0,nuM=0,num=0,divi=0,residuo=0;
	float dolares=0,cambio=0;
	
	

	
	//Ejercicio11
	printf("\nIngrese el area de su triangulo: ");scanf("%d",&base);
	printf("Ingrese la altura de su triangulo: ");scanf("%d",&altura);
	area=(base*altura)/2;printf("Su area es: %d",area);
	
	//Ejercicio 12
	printf("\nIngrese cuantos pesos deseas cambiar a Dolares: ");scanf("%d",&peso);
	printf("Ingrese la tasa del dolar: ");scanf("%f",&dolares);
	cambio=peso/dolares;printf("Usted tiene: %f",cambio);
	
	//Ejercicio 13
	printf("\nIngrese un numero: ");scanf("%d",&nuM);
	printf("Ingrese un numero menor: ");scanf("%d",&num);
	divi=nuM/num;printf("Su numero entero es: %d",divi);
	residuo=nuM-(num*divi);
	printf("\nSu residuo anterior es: %d",residuo);
	getchar();
	
	
	
	return 0;
}
