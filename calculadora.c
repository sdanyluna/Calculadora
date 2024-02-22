#include <stdio.h>
#include <stdlib.h>

int main() {
  int suma,a,b,opc,min,sus,res;
  int variable1, variable2, resultado;
  printf("\t\tPrograma de la Calculadora\n");
  printf("Menu\n");
  printf("Suma ..................... 1\n");
  printf("Resta .................... 2\n");
  printf("Multiplicacion ........... 3\n");
  printf("Division ................. 4\n");
  printf("Eliga una opcion: ");
  scanf("%i", opc);
  switch(opc)
  {
    case 1: 
        printf("\tSUMA\n");
        printf("Inserta el primer valor a sumar: ");
        scanf("%i", a);
        printf("Inserta el segundo valor a sumar: ");
        scanf("%i", b);
        suma=a+b;
        printf("La suma de los dos numeros es: %i", suma);
        printf("\n\n");
        break;
    case 2:
        printf ("\tRESTA\n");
        printf ("Ingresa el minuendo: ");
        scanf ("%i", min);
        printf ("Ingresa el sustraendo: ");
        scanf ("%i", sus);
        res= min-sus;
        printf("El resultado de la resta es: %i", res);
        break;
    case 3:
        printf("\tMULTIPLICACION\n");
        printf("Ingrese el primer valor a multiplicar");
        scanf("%i", variable1);
        printf("Ingrese el segundo valor a multiplicar");
        scanf("%i", variable2);
        resultado= variable1*variable2;
        printf("El resultado a Multiplicar es: %i", resultado);
        break;
    case 4:
        break;
    default:
        printf("No existe la opcion");
        break;
  }
  return 0;
}

