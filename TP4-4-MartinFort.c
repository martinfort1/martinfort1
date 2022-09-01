#include <stdio.h>

int main(void) {
  int m, d, c;
  printf("Ingrese 1 numero\n");
  scanf("%i", &m);
  d= m*10;
  c = m*100;
  printf("En metros es: %i \n",m);
  printf("En decimetros es: %i \n",d);
  printf("En centimetros es: %i \n",c);
  return 0;
}