#include <stdio.h>

int main(){
    int numero = 5;
    int *pNumero = NULL;
    pNumero = &numero;

    printf ("\nEl contenido del puntero es: %p", pNumero);
    printf ("\nLa direccion de memoria almacenada por el puntero es: %p", pNumero);
    printf ("\nLa direccion de memoria de la variable ''numero'' es: %p ", &numero);
    printf ("\nLa direccion de memoria del puntero es: %p", &pNumero);
    printf ("\nEl tamaño de memoria utilizado por esa variable (puntero) es: %d", sizeof(pNumero));
    printf ("\nEl tamaño de memoria utilizado por esa variable (numero) es: %d", sizeof(numero));

   getchar();
    return (0);
}