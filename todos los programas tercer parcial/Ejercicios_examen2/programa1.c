/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion:  copia de un arreglo------------------------*/
/*---------------------------------------------------------*/

#include <stdio.h>
int main(void)
{
  float arreglo[10] = {3.2, 3.5, 5.5, 8.9, 2.5,  1.0, 1.3, 5.4, 1.3, 3.1}, arreglo_copia[10];
  
  for (int i = 0; i < 10; i++) 
  {
    printf(" %f ", arreglo[i] );
  }
  for (int i = 0; i < 10; i++)
  {
    arreglo_copia[i] = arreglo[i];
  }
  printf("\n\n Arreglo ya copiado\n");
  for (int i = 0; i < 10; i++)
  {
    printf(" %f ", arreglo_copia[i] );
  }
 
  return 0;
}
