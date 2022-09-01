#include <stdio.h>
// Ingresar el radio de un círculo, presentar en pantalla el diámetro, el perímetro y el área
//diam = r*2 , perim = diam * Pi(3.14), area= r*r * Pi (3.14)
int main(){
    int r, diam;
    float pi, perim, area;
    printf("Por favor ingrese el radio de un circulo \n");
    scanf("%i", &r);
    
    pi= 3.14;
    diam = r * 2;
    perim = diam*pi;
    area = r*r*pi;
    
    printf("El diametro es: %i \n", diam);
    printf("El perimetro es: %f \n", perim);
    printf("El área es: %f \n", area);
    return 0;
}