#include<stdio.h>
#include<conio.h>

int main(){
	
	int nota1,nota2,nota3,nota4,prom,nu1,nu2,suma,resta,multi,divi,ope;

	
	printf("\nDigite 4 notas: \n");
	scanf("%d",&nota1);
	scanf("%d",&nota2);
	scanf("%d",&nota3);
	scanf("%d",&nota4);
	prom=(nota1+nota2+nota3+nota4)/4;
	printf("\nEl promedio es: %d",prom);
	
	
	if (prom>=101){
		printf("\nSu nota es invalida ");
	}
		
	else if(prom>=90){	
		printf("\nSu Calificacion es A ");
		}
	
	else if(prom>=80){		
		printf("\nSu Calificacion es B ");
	}
	
	else if(prom>=70){		
		printf("\nSu Calificacion es C ");
	}

	else if(prom>=60){		
		printf("\nSu Calificacion es D ");
	}
	
	else if(prom<=59){		
		printf("\nSu Calificacion es F ");
	}
		
	printf("\n \nCalculadora Bruta: ");
	printf("\n1=Para Sumar	\n2=Para Restar	\n3=Para Dividir	\n4=Para multiplicar");
	printf("\n \nIngrese un numero depediendo que accion deseas realizar: ");
	scanf("%d",&ope);
	
	printf("\nIngrese un numero: ");scanf("%d" ,&nu1);
	printf("\nIngrese un numero: ");scanf("%d" ,&nu1,&nu2);

	
	switch(ope){
		
		case 1:printf("La suma es: %d",nu1+nu2);break;
		case 2:printf("La resta es: %d",nu1-nu2);break;
		case 3:printf("La division es: %d",nu1/nu2);break; 
		case 4:printf("La multiplicacion es: %d",nu1*nu2);break;
		
	}
	
	
	
		
	getchar();
	return 0;
}
