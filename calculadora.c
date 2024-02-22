#include <stdio.h>
#include <stdlib.h>

int main() {
  int opc = 1;

  do {
    printf("Introduce una de las siguientes opciones:\n");
    printf("\n\t1\tSuma");
    printf("\n\t2\tResta");
    printf("\n\t3\tMultiplicacion");
    printf("\n\t4\tDivision");
    printf("\n\t5\tSalir\n");
    scanf("%i",&opc);

    switch (opc) {
      case 1:
        int suma,a,b;
        int variable1, variable2, resultado;
        printf("\t\tPrograma de la Calculadora\n");
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
      case 5:
        return 0;
        break;
    }
    
  } while (opc != 2);
  
  return 0;
}

