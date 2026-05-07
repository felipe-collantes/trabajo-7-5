#include <stdio.h>
int sumar(int a, int b);
int main (int argc, char *argv[]) 
{   int a, b;
    printf("ingrese 1er numero");
    scanf("%d,&a");
    printf("ingrese 2do numero");
    scanf("%d,&b");
    printf("%d,suma(a,b)");
    return 0;
}

int sumar(int a, int b)
{
    return a+b;
}