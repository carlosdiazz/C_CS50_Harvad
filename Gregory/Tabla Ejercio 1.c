#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int nu1=0;	
	printf("Introduce hasta que numero deseas multiplicar: ");scanf("%d",&nu1);
	
    for (int a=1;a<nu1+1;a++){
        for (int i=1;i<11;i++){
			printf("%d * %d = %d \n",a,i,a*i);		
    }	
	printf("\n---------------\n");	
    }		
	return 0;
}
