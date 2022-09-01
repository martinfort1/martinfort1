#include<stdio.h>
//leer 2 numeros enteros, presentar en pantalla el promedio de ellos
int main(){
    int number1, number2, promedio;
    scanf("%d %d",&number1, &number2);
    promedio = (number1 + number2) / 2;
    printf("El promedio de los 2 numeros es: %i", promedio);
      return 0;
}