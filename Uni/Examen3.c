#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int frac=0,dinero=0,mone20=20,mone10=10,mone5=5,mone1=1,restante=0;
	printf("Introduzca una cantidad de dinero: ");scanf("%d",&dinero);

	if(dinero>=20){
		frac=dinero/mone20; printf("\nUsted tiene de monedad de 20: %d",frac);restante=dinero-(frac*mone20);
		if(restante<=19){
		frac=0;frac=restante/mone10;printf("\nUsted tiene de monedad de 10: %d",frac);restante=restante-(frac*mone10);
		if (restante<=9);{
		frac=0;frac=restante/mone5;printf("\nUsted tiene de monedad de 5: %d",frac);restante=restante-(frac*mone5);
		if (restante<=4){
			frac=0;frac=restante/mone1;printf("\nUsted tiene de monedad de 1: %d",frac);	
		}
		}
		}
	}
	else if (dinero<=19){
		frac=dinero/mone20; printf("\nUsted tiene de monedad de 20: %d",frac);restante=dinero-(frac*mone20);
		if(restante<=19){
		frac=0;frac=restante/mone10;printf("\nUsted tiene de monedad de 10: %d",frac);restante=restante-(frac*mone10);
		if (restante<=9);{
		frac=0;frac=restante/mone5;printf("\nUsted tiene de monedad de 5: %d",frac);restante=restante-(frac*mone5);
		if (restante<=4){
			frac=0;frac=restante/mone1;printf("\nUsted tiene de monedad de 1: %d",frac);
			
		}
		}
		}
	}
	
	
	
	
	
	return 0;
}
