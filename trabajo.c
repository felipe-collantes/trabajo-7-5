#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicacion.h"
#include "division.h"
int main (int argc, char *argv[]) 
{   int a, b;
    printf("ingrese 1er numero");
    scanf("%d,&a");
    printf("ingrese 2do numero");
    scanf("%d,&b");
    printf("El resultado de la suma es: %d\n",sumar(a,b));
    printf("El resultado de la resta es: %d\n",restar(a,b));
    printf("El resultado de la multiplicacion es: %d\n", multiplicacion(a,b));
    printf("El resultado de la division es: %d\n",division(a,b));
    return 0;
}