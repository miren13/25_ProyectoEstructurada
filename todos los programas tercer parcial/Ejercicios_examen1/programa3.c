/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion: cuantos litros tiene un tanque--------------*/
/*---------------------------------------------------------*/



#include <stdio.h>
#include "funciones.h"
int main(void)
{
  float largo, ancho, altura, volumen, litros;
  printf("Litraje de una alberca \n" );
  printf("Ingrese el ancho de la alberca \n" );
    scanf("%f", &ancho );
  printf("Ingrese el largo de la alberca \n" );
    scanf("%f", &largo );
  printf("Ingrese la altura de la alberca \n" );
    scanf("%f", &altura );
  volumen = volumen_rectangulo(largo, ancho, altura);
  metros_cubicos_litros(volumen);
  return 0;
}
