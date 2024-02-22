#include <stdio.h>
#include <stdlib.h>

int main() {
int variable1, variable2, resultado;

  printf("\tMULTIPLICACION\n");
  printf("Ingrese el primer valor a multiplicar");
  scanf("%i", variable1);
  printf("Ingrese el segundo valor a multiplicar");
  scanf("%i", variable2);
  resultado= variable1*variable2;
  printf("El resultado a Multiplicar es: %i", resultado);
  return 0;
}

