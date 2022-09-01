/*Ingresar un número natural de 4 o más dígitos, invertir el orden de sus dígitos.
Presentar por pantalla el número ingresado y su invertido.*/
#include <stdio.h>
int main(){
  int numero, invertido, resto;
  invertido = 0;
  printf("Introduzca un numero\n");
  scanf("%i", &numero);
  printf("El numero que introduciste es %i\n", numero);
  while(numero!=0){
    resto = numero % 10;
    invertido= invertido*10 + resto;
    numero = numero/10;
  }
  printf("El numero invertido es %i", invertido);
  return 0;
}