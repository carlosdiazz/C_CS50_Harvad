#include <stdio.h>
#include <stdlib.h>

struct mesa{
	
	int ancho;
	int altura;
	int groso;
	char nombre[15];
	
}mes1, mes2;

main (){
	
	//struct alumno mes1;
	
	printf("Digite el ancho de la mesa: ");scanf("%i",&mes1,mes2.ancho);
	printf("Digite la altura de la mesa: ");scanf("%i",&mes1,mes2.altura);
	printf("Digite su grozor de la mesa: ");scanf("%i",&mes1,mes2.groso);
	printf("Digite el nombre de la mesa: ");scanf("%s",&mes1,mes2.nombre);
	
	printf("Su ancho es de: %i \nSu altura es: %i \nSu grozor es: %i \nSu nombre es: %s",mes1.ancho,mes1.altura,mes1.groso,mes1.nombre);
	
	return 0;
}
