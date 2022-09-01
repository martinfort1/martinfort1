#include <stdio.h>
int main(){
    //Defino variables
    int number1, number2, number3, sum;
    printf("Introduzca 3 numeros enteros \n");
    scanf("%d %d %d", &number1, &number2, &number3);
    //Escaneo los datos ingresados, los sumo y los asigno a la variable 
    sum = number1 + number2 +number3;
    // Defino la suma y la muestro por pantalla
    printf("%d + %d + %d = %d", number1 , number2, number3, sum);
    return 0;
}