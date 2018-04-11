#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{

int opcion;
int num1 = 0;
int num2 = 0;
int result;
int acum;
int cont;
char on='s';

printf("Bienvenido a la calculadora de Matias Escudero\n");

while (on=='s')
{
    printf("\n1. Ingrese 1er operando (A=%d)\n",num1);
    printf("2. Ingrese 2do operando (B=%d)\n",num2);
    printf("3. Calcular la suma \n");
    printf("4. Calcular la resta \n");
    printf("5. Calcular la division \n");
    printf("6. Calcular la multiplicacion \n");
    printf("7. Calcular el factorial de A \n");
    printf("8. Calcular todas las operaciones \n");
    printf("9. Salir \n\n");

    scanf("%d",&opcion);

    switch(opcion)
    {
        case 1:
            printf("Ingrese el valor del primer operando ");
            scanf("%d",&num1);
        break;
        case 2:
            printf("Ingrese el valor del segundo operando ");
            scanf("%d",&num2);
        break;
        case 3:
            result=suma(num1,num2);
            printf("La suma es de %d\n\n",result);
        break;
        case 4:
            result=resta(num1,num2);
            printf("La resta es de %d\n\n",result);
        break;
        case 5:
            if(num2!=0)
            {
                result=division(num1,num2);
                printf("La division es de %d\n\n",result);
            }
            else
            {
                printf("No se peude realizar una division si el segundo operando es cero. Por favor, ingrese otro.\n");
            }
        break;
        case 6:
            result=multiplicacion(num1,num2);
            printf("La multiplicacion es de %d\n\n",result);
        break;
        case 7:
            result=factorial(num1);
            printf("El fatctorial es %d\n",result);
        break;
        case 8:
            result = suma(num1,num2);
            printf("El resultado de la suma es %d\n",result);
            result = resta(num1,num2);
            printf("El resultado de la resta es %d\n",result);
            result = multiplicacion(num1,num2);
            printf("El resultado de la multiplicacion es %d\n",result);
            if(num2!=0)
            {
                result=division(num1,num2);
                printf("El resultado de la division es %d\n",result);
            }
            else
            {
                printf("No se peude realizar una division si el segundo operando es cero. Por favor, ingrese otro.\n");
            }
            result = factorial(num1);
            printf("El resultado del factorial de A es %d\n\n",result);
        break;
        case 9:
            printf("\nSe va a salir de la calculadora. \n\n");
            on='n';
        break;

    }
}

return 0;
}
