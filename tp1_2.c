#include <stdio.h>

void potencia2 (int *numero);
void mostrar (char *caracter);

//main
int main()
{
    int num = 5;
    int cuadrado;
    char caracter = "A";

    printf("Funcion que devuelve el cuadrado de un numero");
    cuadrado = (num);
    printf("el cuadrado es: $d", cuadrado);


    return 0;
}

//funciones
int cuadrado (int numero)
{
    return (numero*numero);
}

void potencia2 (int &numero)
{
    int *aux = &numero;
    printf ("\n\nEl cuadrado de %d es %d", *aux, (*aux * *aux));
}

void mostrar (char &caracter)
{
    printf("\n\nLa direccion del caracter introducido es: $p y el caracter es: $c", &caracter, caracter);
}