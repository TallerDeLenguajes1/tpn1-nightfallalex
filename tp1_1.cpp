#include <stdio.h>

void main(){
    int numero = 5;
    int *punteroNumero;
    punteroNumero = &numero;

    printf ("\n el contenido del puntero es: %p", punteroNumero);
    /*printf ("\n ");
    printf ("\n ");
    printf ("\n ");
    printf ("\n ");*/
    
    return 0;
}