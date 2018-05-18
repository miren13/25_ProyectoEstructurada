/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion: area de un terreno -------------------------*/
/*---------------------------------------------------------*/


#include <stdio.h>
#include "funciones.h" 
int main(void)
{
  float area, altura, base; 
  printf("Area de un terreno\n" );
  printf("Ingrese la base : " ); 
    scanf("%f", &base );
  printf("Ingrese la altura : " );
    scanf("%f", &altura );
  printf("El area del terreno es de %.2f m^2 \n", area_rectangulo(base, altura) ); 
  return 0;
}
