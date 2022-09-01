/*Ingresar un número expresado en el sistema binario, convertirlo al sistema decimal.
Presentar ambos números en el centro de la pantalla.*/
#include <stdio.h>
int main(){
  int binario, decimal, conversor, resto;
  printf("Introduce un numero en binario\n");
  scanf("%i", &binario);
  printf("Tu numero en binario es: %i\n", binario);
  conversor=1;
  while(binario !=0){
    resto= binario % 10;
    decimal= decimal + resto*conversor;
    binario =binario/10;  
    conversor= conversor * 2;
  }
  printf("Tu numero en decimal es %i", decimal);
  
  return 0;
}
/*  
    resto = numero % 10;
    invertido= invertido*10 + resto;
    numero = numero/10;
*/