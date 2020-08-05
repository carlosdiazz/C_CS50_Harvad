#include <stdio.h>
#include <cs50.h>

//Estos codigos funcionan en la pagina de sandbox.cs50.io

int main(void)
{
    printf("Hola, Mundo\n");

    string nombre = get_string("Cual es tu nombre?\n");
    printf("Hola, %s\n", nombre);
}


//Para compilarlo por la pagina usamos el comando clang -o hola.c hola.c -lcs50