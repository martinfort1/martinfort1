/*Ingresar las coordenadas de N puntos en el plano indicar cuántos de ellos están :
a) en el origen de coordenadas
b) en el eje x
c) en el eje y
d) en el primer cuadrante
e) en el segundo cuadrante
f) en el tercer cuadrante
g) en el cuarto cuadrante*/
#include <stdio.h>
int main(){
  int n, x, y, c, oc, ex, ey, pc, sc, tc, cc;
  c=0;
  oc=0;
  ex=0;
  ey=0;
  pc=0;
  sc=0;
  tc=0;
  cc=0;
  printf("Ingrese la cantidad de puntos en el plano\n");
  scanf("%i", &n);
  while(c<n){
    printf("Ingrese un punto en el plano\n");
    scanf("%i %i", &x, &y);
    c++;
    if(x==0 && y==0){
      oc++;
    }
    if(x==0 && y!=0){
      ey++;
    }
    if(x!=0 && y==0){
      ex++;
    }
    if(x>0 && y>0){
      pc++;
    }
    if(x<0 && y>0){
      sc++;
    }
    if(x<0 && y<0){
      tc++;
    }
    if(x>0 && y<0){
      cc++;
    }
  }
  printf("Cantidad de puntos en:\nEl origen de coordenadas: %i\nEl eje x: %i\nEl eje y: %i\nEl primer cuadrante: %i\nEl segundo cuadrante: %i\nEl tercer cuadrante: %i\nEl cuarto cuadrante: %i\n", oc, ex, ey, pc, sc, tc, cc);
  return 0;
}
