/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion: arreglo unidimensinal ----------------------*/
/*---------------------------------------------------------*/
#include <stdio.h>
int main(void)
{
  char letras[] = { "NANCY" }, minusculas[8];
  printf("Conversion de las letras\n" );
  printf("%s\n", letras );
  for (int i = 0; i < 7; i++)
  {
    minusculas[i] = letras[i] + 32;
  }
  printf("%s\n", minusculas );
  return 0;
}
