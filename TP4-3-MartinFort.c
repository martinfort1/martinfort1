#include <stdio.h>
//Ingresar 2 numeros por pantalla y presentar la media geometrica 
int main() {
  int number1, number2,sum;
  float mg;
  printf("Ingrese 2 numeros\n");
  scanf("%i %i", &number1, &number2);
  sum = number1 + number2;
  mg = sqrt(sum);
  printf("La media geometrica es %f", mg);
  return 0;
}