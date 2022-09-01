/*Ingresar dos puntos en el plano P1(x1, y1) y P2(x2, y2), estos corresponden, respectivamente, a los vértices inferior izquierdo y superior derecho de un rectángulo. Indicar el perímetro y la superficie del rectángulo. 
Perimetro = Suma de lados
Superficie = L * h
*/
#include <stdio.h>

int main(){
  int x1, y1 ,x2, y2, l, h , p , s;

  printf("Ingrese 2 numeros. Estos seran el punto en el plano del vertice inferior izquierdo de un rectangulo\n");
  scanf("%i %i", &x1, &y1);
  
  printf("Tu vertice inferior es (%i, %i) \n", x1, y1);
  
  printf("Ingrese 2 numeros. Estos seran el punto en el plano del vertice superior derecho de un rectangulo, debe cumplir la siguiente lógica:  x1 < x2 and y1 < y2\n");
  scanf("%i %i", &x2, &y2);

 printf("Tu vertice superior es (%i, %i) \n", x2, y2);
  
  if(x1 < x2 && y1 < y2){
    l = x2 - x1;
    h = y2 - y1;
    p = l*2 + h*2;
    s = l * h;
    printf("El perimetro del rectangulo es: %i \n", p);
    printf("La superficie del rectangulo es: %i", s);
    
  }else{
    printf("La lógica de los puntos en el plano no ha sido respetada. Reinicie el programa y respete el orden de los puntos en el plano");
  }
  
  return 0;
}