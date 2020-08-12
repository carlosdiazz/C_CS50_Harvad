#include <stdio.h>
#include <cs50.h>

//Estos codigos funcionan en la pagina de sandbox.cs50.io

void sumar(void);

int main(void)
{
    //Aqui llamo la funcion sumar
    sumar();
}

//Aqui creo la funcion
void sumar(void)
{
    int a = get_int("Digite su primer numero?\n");
    int b = get_int("Digite su segundo numero?\n");
    int sumar = a + b;
    printf("La suma de %i + %i es igual a: %i \n",a,b,sumar);
}
