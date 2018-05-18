/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion: tablas del 1-5 -----------------------------*/
/*---------------------------------------------------------*/


#include <stdio.h>
int main(void)
{
  printf("\nTablas de multiplicar del 1 al 5\n\n" );
  for (int i = 1; i <= 5; i++) 
  {
    for (int j = 1; j <= 10; j++)
    {
      printf("%d x %d = %d\n", i, j, i*j );
    }
    printf("\n");
  }
  return 0;
}
