/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion:  arreglo unidimensional    -----------------*/
/*---------------------------------------------------------*/
#include <stdio.h>
int main(void)
{ 
  int arreglo[10] = {1000, 22, 3, 54, 6, 40, 62, 3, 12, 100}, mayor;
  
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arreglo[i] );
  }
  mayor = arreglo[0];
  for (int i = 0; i < 10; i++)
  {
    if (arreglo[i] > mayor)
    {
      mayor = arreglo[i];
    }
  }
  printf("\nEl numero mayor es el siguiente : %d\n", mayor );
  return 0;
}
