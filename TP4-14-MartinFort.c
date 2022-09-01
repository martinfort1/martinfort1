#include <stdio.h>
/*Ingresar tres números, ordenarlos en forma ascendente y presentarlos por pantalla. En
caso de ser iguales imprimir un mensaje que diga " Son Iguales".*/
int main(){
  int a, b, c, n1, n2, n3;
  printf("Ingrese 3 numeros\n");
  scanf(" %i %i %i", &a, &b, &c);
  if(a == b && b == c){
    printf("Son iguales");
  }else{
    if(a < b){
      if(b < c){
        n1 = a;
        n2 = b;
        n3 = c;
      }else{
        if(a < c){
        n1 = a;
        n2 = c;
        n3 = b;
        }else{
        n1 = c;
        n2 = a;
        n3 = b;          
        }
      }
    }else{
      if(a < c){
        n1 = b;
        n2 = a;
        n3 = c;        
      }else{
        if (b < c){
        n1 = b;
        n2 = c;
        n3 = a;          
        }else{
        n1 = c;
        n2 = b;
        n3 = a;          
        }
      }
    }
  printf("Tus 3 numeros ordenados de forma ascendente: %i, %i y %i", n1, n2, n3);
  }
  return 0;
}