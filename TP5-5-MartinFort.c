/*Se ingresan N valores numéricos. Determinar el mayor y el menor de los valores
ingresados.*/
#include <stdio.h>
int main(){
  int N, x, c, ma, me;
  printf("Introduzca la cantidad de numeros que va a utilizar\n");
  scanf("%i", &N);
  c=0;
  ma=0;
  me=4198976;
  while(c<N){
    printf("Ingrese un numero\n");
    scanf("%i", &x);
    c++;
    if(x<me){
      me = x;
    }
    if(x>ma){
      ma = x;
    }
  }
  printf("El numero mayor es %i, y el menor es %i", ma, me);
  return 0;
}