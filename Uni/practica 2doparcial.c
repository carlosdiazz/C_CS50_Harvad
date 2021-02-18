#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct infor_clientes{
	
	char nombre[15];
	char direccion[50];
	int telefono;
	int nume_cuenta;
	char tipo_cuenta[10];
	float saldo_cuenta;
	
}cliente1;


int main(){
	
	
	int contador=0, cuadrado=2, cubo=3, cuad,cub,num,x,cont=0,sumatoria=0,aux=0; 
	
	int nu1=0,nu2=0,nu3=0,suma=0;
	
	printf("\nEjercicio #6 con For\n ... Ingrese una letra para continuar");getch();
	for(num=2;num<=100;num++)
	{
		for (x=2;x<=num;x++)
		
			if(num%x==0)
			cont++;
			if (cont==1)
			printf(" %d ",num);		
			cont=0;
			//sumatoria=sumatoria+num;
	
	}	
	
	
	
	
	printf("\nEjercicio #4 con Do While... Ingrese una letra para continuar\n");getch();
	
	printf("\nIngrese el primer numero: ");scanf("%d",&nu1);
	printf("\nIngrese el segundo numero: ");scanf("%d",&nu2);
	do{
	printf("\nIngrese el tercer numero: ");scanf("%d",&nu3);	
	suma=nu1+nu2;
		
		
	}while(nu3<=nu1 || nu3<=nu2 ||nu3>=suma);
	
	printf("\nEl primer numero que ingreso es %d el segundo numero que ingreso es %d y su tercer numero que ingreso es %d",nu1,nu2,nu3);
	printf("\nLa suma del primer y segundo numero es: %d y su Tercer numero es menor que el \n \n \n",suma);
	
	printf("\nEjercicio #5 con For\n ... Ingrese una letra para continuar");getch();
	for (contador=1;contador<=20;contador++)
	{
		cuad=contador*contador;cub=contador*contador*contador;
		printf("\nEl cuadrado del numero %d es %d y su cubo es %d",contador,cuad,cub);
	}
	
	
	//printf("\nLa sumatoria total es igual a: %d",sumatoria);
	
	printf("\nEjercicio #7 con STRUCT\n ... Ingrese una letra para continuar\n");getch();
	
	printf("Ingrese su Nombre: ");scanf("%s",&cliente1.nombre);
	printf("Ingrese su Direccion: ");scanf("%s",&cliente1.direccion);
	printf("Ingrese su Telefono: ");scanf("%d",&cliente1.telefono);
	printf("Ingrese su Numero de Cuenta: ");scanf("%d",&cliente1.nume_cuenta);
	printf("Ingrese su Tipo de cuenta: ");scanf("%s",&cliente1.tipo_cuenta);
	printf("Ingrese su Saldo de cuenta: ");scanf("%f",&cliente1.saldo_cuenta);
	
	printf("\nSu Nombre es: %s",cliente1.nombre);
	printf("\nSu Direccion es: %s",cliente1.direccion);
	printf("\nSu Telefono es: %d",cliente1.telefono);
	printf("\nSu Numero de Cuenta es: %d",cliente1.nume_cuenta);
	printf("\nSu Tipo de cuenta es: %s",cliente1.tipo_cuenta);
	printf("\nSu Saldo de Cuenta es: %f",cliente1.saldo_cuenta);
	
	
	getch();
	return 0;
}
