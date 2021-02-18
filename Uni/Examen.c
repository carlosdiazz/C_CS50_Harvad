#include <stdio.h>
#include <stdlib.h>

int main(){

	char nombre[6]="Carlos", apellido[4]="Diaz",matricula[9]="2018-1141",celular[12]="829-802-5258",direccion[7]="La Vega";
	int cambio=0,pagar=0,descuento=0,totalfinal=0,total=0,subtotal=0,itebis=15,pro1=0,pro2=0,pro3=0,mat1=0,mat2=0,mat3=0,mat4=0,edad1=0,edad2=0,prom=0,nu3=0,nu1=10,nu2=5,suma=0,base=5,altura=3,area=0,perimetro=0;
	float mu1=6,mu2=5,mu3=0;
	
	
	//Ejercicio 1
	printf("\n Bienvenido a programaci%cn \n",162);
	
	
	//Ejercicio 2
	printf("\n Su nombre es: ");
	printf(nombre);
	
	printf("\n Su apellido es: ");
	printf(apellido);
	
	printf("\n Su Matricula es: ");
	printf(matricula);
	
	printf("\n Su Celular es: ");
	printf(celular);

	printf("\n Su Direccion es: ");
	printf(direccion);
	
	//Ejercicio 3
	suma=nu1+nu2;
	printf("\n \n La suma de 10 + 5  es: %d",suma);
	
	//Ejercicio 4
	printf("\n \n El barco: \n");
	printf("\n  -------------\n");
	printf("  \\___________/");


	//Ejercicio 5
	area=base*altura;
	printf("\n \n La area de un rectangulo con base de 5 y altura de 3 es: %d",area);
	
	//Ejercicio 6
	mu3=mu1/mu2;
	printf("\n \n El resultado es: %f",mu3);
	
	//Ejercicio 7
	printf("\n \n Ingrese un Numero: ");scanf("%d",&nu3);
	nu3=nu3+1;
	printf(" El siguiente numero es: %d",nu3);
	
	//Ejercicio 8
	printf("\n \n Ingrese su edad: ");scanf("%d",&edad1);
	printf(" Ingrese la edad de su amigo: ");scanf("%d",&edad2);
	prom=(edad1+edad2)/2;
	printf(" La edad promedia es: %d",prom);
	
	//Ejercicio 9
	printf("\n \n Ingrese su nota de Matematicas: ");scanf("%d",&mat1);
	printf(" Ingrese su nota de Espa%col: ",164);scanf("%d",&mat2);
	printf(" Ingrese su nota de Sociales: ");scanf("%d",&mat3);
	printf(" Ingrese su nota de Estructura: ");scanf("%d",&mat4);
	prom=(mat1+mat2+mat3+mat4)/4;
	printf("Su promedio de calificacion es: %d",prom);
	
	//Ejercicio 10
	printf(" Ingrese el valor de su Primer Producto: ");scanf("%d",&pro1);
	printf("\n Ingrese el valor de su Segundo Producto: ");scanf("%d",&pro2);
	printf("\n Ingrese el valor de su Tercer Producto: ");scanf("%d",&pro3);
	subtotal=pro1+pro2+pro3;total=subtotal+itebis;descuento=(total*0.20);
	totalfinal=total-descuento;
	printf(" El itibis es igual a: %d",itebis);
	printf("\n El Total es igual a: %d",total);
	printf("\n El Descuento es igual a: %d",descuento);
	printf("\n El Total final es: %d",totalfinal);
	printf("\n Con cuantos deseas pagar: ");scanf("%d",&pagar);
	cambio=pagar-totalfinal;
	printf(" Su cambio es de: %d",cambio);
	
	
	
	getchar();
	return 0;
	
}
