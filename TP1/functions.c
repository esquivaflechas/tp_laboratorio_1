#include<stdio.h>
#include"functions.h"

int suma(int num1, int num2)
{
    int suma;
    suma=num1+num2;
    return suma;
}
int resta(int num1, int num2)
{
    int resta;
    resta=num1-num2;
    return resta;
}
int multiplicacion(int num1, int num2)
{
    int multiplicacion;
    multiplicacion=num1*num2;
    return multiplicacion;
}
int division(int num1,int num2)
{
    int division;
    division=num1/num2;
    return division;
}
int factorial(int num1)
{
    int acum=num1;
    int cont=num1-1;
    while(cont>0)
    {
        acum=acum*cont;
        cont--;
    }
    return acum;
}
