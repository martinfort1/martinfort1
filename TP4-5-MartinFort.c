#include <stdio.h>
//Convertir fahrenheit a centigrados C= 5/9(F-32)
int main() {
  float f, c;
  printf("Ingrese temperatura en Fahrenheit \n");
  scanf("%f", &f);
  c = ((f-32)*5)/9;
  printf("La temperatura en Centigrados es: %f \n", c);
  printf("La temperatura en Fahrenheit es: %f", f);
  return 0;
}