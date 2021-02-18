#include <stdio.h>
#include<stdlib.h>

struct persona{
	
	int edad;
	char nombre[15];
	char apellido[15];
	int numero;
		
}per1;

int main(){
	
	printf("Escriba su Edad: ");scanf("%i",&per1.edad);
	printf("Escriba su Nombre: ");scanf("%s",&per1.nombre);
	printf("Escriba su Apellido: ");scanf("%s",&per1.apellido);
	printf ("Escriba su Numero Telefonico: ");scanf("%i",&per1.numero);
	
	printf("\nSu nombre es: %s \nSu Apellido es: %s \nSu edad es: %i \nSu numero es: %i",per1.nombre,per1.apellido,per1.edad,per1.numero);	
	return 0;
}
