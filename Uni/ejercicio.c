
#include<stdio.h>

int main(){
	
	int x=6, y=5,z=12,sol,sol1,sol2,sol3,sol4,sol5,a,b,c,d, prom;
	//float sol;
	
	
	sol=(10<=20)&&(25>=20);
			//v				v
			
	sol1=(10<=20)&&(10>=20);
			//v				F
	
	sol2=(10<=20)||(25>=20);
			//v				v
			
	sol3=(10<=20)||(10>=20);
			//v				F
	sol4=(10<=20)!=(25>=20);
			//v				v
			
	sol5=(10<=20)!=(10>=20);
			//v				F
	
	
	//x+=5;
	
	printf(" %d",sol);		printf(" %d",sol1);		printf(" %d",sol2);
	printf(" %d",sol3);		printf(" %d",sol4);		printf(" %d",sol5);

	//printf("\nDigite los valores: \n");
	//scanf("%d %d %d %d", &a, &b, &c, &d);
	//printf("%d %d %d %d",d,c,b,a);

	//prom=(a+b+c+d)/4;
	//printf("\nEl promedio es: %d",prom);
	
	
	//getchar();
	return 0;
}
