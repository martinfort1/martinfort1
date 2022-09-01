#include <stdio.h>
// Dado el precio de un producto indicar, por pantalla, los impuestos que debe pagar. IVA
//21%, Ingresos Brutos 2.5% e Impuesto Municipal 1.5%.
int main(){
  int pr;
  float iva, ib , im;

  printf("Introduzca el precio de un árticulo para calcular sus impuestos \n");
  scanf("%i", &pr);
  
  iva = (pr/100.0)* 21;
  ib = (pr/100.0) * 2.5;
  im = (pr/100.0) * 1.5;

  printf("El IVA del producto es: $%f \n", iva);
  printf("Ingresos Brutos del producto es: $%f \n", ib);
  printf("El Impuesto Municipal del producto es: $%f \n", im);
  
  return 0;
}