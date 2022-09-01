#include <stdio.h>
int main(){
  int dn, mn, an, da, ma, aa, ed, em, ea;
printf("Ingrese su fecha de nacimiento con este formato: dia mes año \n");
scanf("%i %i %i", &dn, &mn, &an);
printf("Ingrese la fecha actual con este formato: dia mes año \n");
scanf("%i %i %i", &da, &ma, &aa);
printf("La fecha actual es %i/%i/%i. \n Usted nacio el %i/%i/%i",da, ma, aa, dn, mn, an);
  ea = aa - an;
  if(ma > mn){
    ea = ea;
    }else{
    if( ma < mn){
      ea = ea - 1;
    }else{
      if( da >= dn){
        ea=ea;
      }else{
        ea = ea - 1;
      }
    }
  }
    em = ma -mn + 12;
    if(da >= dn){
      em = em;
    }else{
      em = em - 1;
    }
    if(em >= 12){
      em = em - 12;
    }
    if(da < dn){
      ed = da + 30 - dn;
    }
  if(ed > 30){
    ed = ed -30;
  }
printf("\nSu edad es: %i años, %i meses y %i días.",ea, em, ed);
return 0;
}