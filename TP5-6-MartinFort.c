/*Dada la ecuación de la recta y = 2/3 x - 2, ingresar las coordenadas de N puntos en el
plano. Mostrar: a) los puntos pertenecen a la recta, b) los puntos que están arriba y c)
los que están debajo de ella.*/
#include <stdio.h>
int main(){
  int N, x, y, c, deb, per, arr;
  printf("Dada la ecuación de la recta y = 2/3 x - 2\nIngrese la cantidad de puntos en el plano con los que va a trabajar \n");
  scanf("%i", &N);
  c=0;
  deb=0;
  per=0;
  arr=0;
  while(c<N){
  printf("Ingrese un punto en el plano \n");
  scanf("%i %i",&x, &y);
    if(y== 2/3*x-2){
      per++;
    }else{
      if(y > 2/3*x-2){
        arr++;
      }else{
        deb++;
      }
    }
    c++;
  }
  printf("Hay %i puntos debajo de la recta, %i puntos que pertenecen a ella y %i puntos que estan por encima de la recta \n", deb, per, arr);
  return 0;
}