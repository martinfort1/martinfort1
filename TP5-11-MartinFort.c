/*Se ingresan las coordenadas de N puntos en el plano. Estos forman con el origen un
radio vector que representa una fuerza. Debe Ud. presentar por pantalla la magnitud y
ángulo con OX de la resultante, de este sistema de fuerzas concurrentes.*/
#include <stdio.h>
int main(){
  int N,  x, y, c;
  double  xtotal, ytotal, magtotal, angulo, raiz;
  printf("Ingrese la cantidad de fuerzas que participan del sistema\n");
  scanf("%i", &N);
  c=0;
  while(c<N){
    c++;
    printf("Ingrese un vector\n");
    scanf("%i %i",&x, &y);
    xtotal+=x;
    ytotal+=y;
  }
    raiz= xtotal*xtotal+ytotal*ytotal;
    magtotal= sqrt(raiz);
    angulo = ytotal/magtotal;
    angulo = 90.0 - angulo;
    angulo = cos(angulo);//no se si funciona bien el angulo
  printf("La magnitud total es: %f\nEl angulo con respecto al eje x es: %f", magtotal, angulo);
  return 0;
}