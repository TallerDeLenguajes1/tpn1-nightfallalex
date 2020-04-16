#include <stdio.h>

int cuadrado(int numero);
void potencia2(int numero);
void mostrar (char caracter);
void invertir(int var1,int var2);



//main
int main()
{
    int num1 = 5, num2 = 12, var1, var2;
    int cuadradoNum;

    printf("Funcion que devuelve el cuadrado de un numero en forma de entero:");
    cuadradoNum = (cuadrado (num1));
    printf("\nEl cuadrado de %d es: %d", num1, cuadradoNum);
    printf("\nFuncion que devuelve por impresion de pantalla el cuadrado de la variable num1 '%d' (tipo VOID):", num1);
    potencia2(num1);
    printf("\nLa direccion de la variable num1 es: %p ",&num1);
    printf("\nEl contenido de la variable num1 es: %d ",num1);

    
    printf("\nIngrese un numero (1º numero): ");
    fflush(stdin);
    scanf("%d",&var1);
    printf("\nIngrese otro numero (2º numero): ");
    scanf("%d",&var2);
    invertir(var1,var2);


    getchar();
    return 0;
}

//----------------------------------------FUNCIONES

int cuadrado (int numero)
{
    return (numero*numero);
}

void potencia2 (int numero)
{
    int *aux = &numero;
    printf ("\nEl cuadrado de %d es %d", *aux, (*aux * *aux));
}

void mostrar (char caracter)
{
    printf("\n\nLa direccion del caracter introducido es: $p y el caracter es: $c", &caracter, caracter);
}


void invertir(int var1,int var2)
{
    int aux;

    aux = var1;
    var1 = var2;
    var2 = aux;

    printf("\nEl valor del numero var1 ahora es: %d ",var1);
    printf("\nEl valor del numero var2 ahora es: %d ",var2);

    if(var1<var2){
        printf("\nEn forma ordenada var1 = %d y var2 = %d",var1,var2);
    }else{
        aux = var1;
        var1 = var2;
        var2 = aux;

        printf("\nEn forma ordenada a = %d y b = %d",var1,var2); 
    }
    getchar();
}