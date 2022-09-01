/*Se ingresan N valores numéricos. Se desea saber cuántos son positivos, cuántos
negativos y cuantos iguales a cero*/
#include <stdio.h>
int main(){
  int N, x, p, n, c, i;
  printf("Indica cuantos numeros quieres utilizar\n");
  scanf("%i", &N);
  i=0;
  p=0;
  c=0;
  n=0;
  while(i < N){
    printf("Introduce tu numero\n");
    scanf("%i", &x);
    if(x>0){
      p++;
    }else if(x==0){
      c++;
    }else{
      n++;
    }
    i++;
  }
  printf("Hay %i positivos, %i ceros y %i negativos.", p, c, n);
  return 0;
}