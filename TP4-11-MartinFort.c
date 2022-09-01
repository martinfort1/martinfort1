#include <stdio.h>
/*Ingresar tres valores positivos, indicar si son lados de un triángulo rectángulo.
Presentar por pantalla el mensaje correspondiente.*/
int main() {
  int n1, n2, n3;
  printf("Introduzca 3 numeros que serán los lados de un triangulo\n");
  scanf("%i %i %i", &n1, &n2, &n3);
  
  if(n1 > n2){
    if(n1 > n3){
      if ( n1*n1 == n2*n2 + n3*n3){
        printf("Es un triangulo rectangulo");
      }else if(n1*n1 != n2*n2 + n3*n3){
        printf("No es un triangulo rectangulo"); 
      }else{
        printf("No es un triangulo rectangulo");
        }
    }
  }
      
  else{
    if(n2 > n3){
      if(n2*n2 == n3*n3 + n1*n1){
        printf("Es un triangulo rectangulo");
      }else if(n2*n2 != n3*n3 + n1*n1){
        printf("No es un triangulo rectangulo");
    } }else{
      if(n3*n3 == n1*n1 + n2*n2){
        printf("Es un triangulo rectangulo");
      }else{
        printf("No es un triangulo rectangulo");
      }
    }
 
}
return 0;
}