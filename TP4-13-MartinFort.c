#include <stdio.h>
/*Ingresar tres números enteros, determinar si están ordenados en forma ascendente o
descendente, y si son consecutivos. Presentar por pantalla el mensaje correspondiente*/
int main(){
  int a, b, c;
  printf("Ingrese tres numeros enteros.\n");
  scanf("%i %i %i", &a, &b, &c);
  if(a > b && b> c){
    printf("Estan ordenados de manera descendente.\n");
    if(a == b+1 && c==b-1){
      printf("Los numeros: %i, %i y %i son consecutivos.", a, b, c);
    }
  }
  if(a < b && b < c){
    printf("Estan ordenados de manera ascendente.\n");
    if(a == b-1 && c==b+1){
      printf("Los numeros: %i, %i y %i son consecutivos.", a, b, c);
    }
  }
  return 0;
}