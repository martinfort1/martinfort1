/*Ingresar un número, entero positivo, expresado en el sistema decimal, convertirlo al
sistema binario. Presentar por pantalla el número en decimal y en binario*/
#include <stdio.h>
int main(){
  int decimal, binario, conversor, divisor, resto;
  printf("Ingrese un numero en decimal\n");
  scanf("%i", &decimal);
  printf("Tu numero en decimal: %i\n", decimal);
  conversor=0;
  divisor=1;
  resto= decimal;
  while(decimal> divisor){
    divisor= divisor * 2;
  }
  while(divisor!=0){
    if(divisor<=resto){
      resto = resto - divisor;
      binario= binario + 1;
    }
      binario*=10;
      divisor= divisor/2;
 }
  if(divisor==0){
    binario=binario/10;
  }
  printf("Tu numero en binario es: %i", binario);
  return 0;
}