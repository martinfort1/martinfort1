//Ingresar N números, presentar por pantalla el promedio de ellos.
#include <stdio.h>
int main(){
  int c, n, s, x;
  float pr;
c=0;
s=0;
  printf("Introduzca la cantidad de numeros que va a ingresar en total\n");
  scanf("%i", &n);
  while(c < n){
  printf("Introduzca el valor que desea agregar\n");
  scanf("%i", &x);
    c=c+1;
    s=s + x;
    pr= s/c;
  }
  printf("%f", pr);
  return 0;
}