#include <stdio.h>
#include <cs50.h>

//Estos codigos funcionan en la pagina de sandbox.cs50.io

int main(void)
{
    
    //Ejemplos con int
    int age = get_int("Cual es tu edad?\n");
    int dias = age*365;
    printf("Tienes %i dias\n",dias);    
   

   //Ejemplo Con Float
    float precio = get_float("Cual es su precio: ");
    printf("El total seria %.2f con impuesto incluido\n",precio*1.065);


    //Saber si un numero es Pare o Impar
    int numero = get_int("Digite su numero: ");
    if(numero % 2 == 0){
        printf("Su numero es Par\n");
    }
    else
    {
        printf("Su numero es Impar\n");
    }
    
}