/*Se ingresan N números enteros, presentar el promedio de los pares y el promedio de
los impares. El cero no se cuenta*/
#include <stdio.h>
int main(){
  int n, x, c, sp, si, cp, ci;
  float prp, pri;
  printf("Ingrese la cantidad de numeros que va a utilizar\n");
  scanf("%i", &n);
  c=0;
  cp=0;
  ci=0;
  sp=0;
  si=0;
  while(c<n){
  printf("Ingrese un valor\n");
  scanf("%i", &x);
   c++;
  if(x % 2 == 0){
    cp++;
    sp+=x;
  }else{
    ci=ci+1;
    si=si+x;
  }
  }
  prp =sp/cp;
  pri =si/ci;
  printf("El promedio de los pares es %f \nEl promedio de los impares es %f", prp, pri);
  return 0;
}