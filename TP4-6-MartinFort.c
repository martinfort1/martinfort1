#include <stdio.h>
//Perimetro es la suma de lados, superficie es l * h 
int main(){
  int l, h , p, s;
   printf("Ingrese 2 numeros distintos para: la longitud y la altura de un rectangulo \n");
  scanf("%i %i", &l, &h);
  
  if(l != h){
      p = l*2 + h*2;
      s = l * h;
    printf("El perimetro es %i \n", p);
    printf("La superficie es %i \n", s);
    
  } else{
          printf("Ingresaste dos numeros iguales, formando un cuadrado.\nPor favor reinicia el   proceso e ingresa dos numeros distintos");
    }

  return 0;
}