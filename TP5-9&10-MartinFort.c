/*TP9
Dados tres cuadrados, se considera que estos forman un blanco de tiro
cuadrado 1 : 3 puntos
fuera cuadrado 1 y dentro del 2 : 2 puntos
fuera cuadrado 2 y dentro del 3 : 1 punto
TP10
N puntos en el plano, que representarían tiros. Presentar
un mensaje que indique el puntaje total.
*/
#include <stdio.h>
int main(){
  int sq1, sq2, sq3, N, c, p;
  float x, y;
  c=0;
  sq1=0;
  sq2=0;
  sq3=0;
  printf("Indique cuantos tiros al cuadrado hará\n");
  scanf("%i", &N);
  while(c<N){
    c++;
    printf("Indique las coordenadas del tiro\n");
    scanf("%f %f", &x, &y);
    if(x <= 1 && y <= 1){
      sq1++;
    }
    if(x >= 1 && y >= 1&& x <= 2 && y <= 2){
      sq2++;
    }if(x >= 2 && y >= 2 && x <= 3 && y <= 3){
      sq3++;
    }
  }
  p= 3*sq1 + 2*sq2 + sq1;
  printf("Has sumado %i puntos.\n %i veces diste en el cuadrado mas pequeño, %i en el mediano y %i en el grande", p, sq1, sq2, sq3);
  return 0;
}