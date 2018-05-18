/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 28/04/2018 --------------------------*/
/*Fecha de actualizacion: 03/05/2018 ----------------------*/
/*Descripcion: matriz de [5][5] ----------------------------*/
/*---------------------------------------------------------*/


#include<stdio.h>


#define ROW 5
#define COL 5

int main (void)
{
  int array[ROW][COL];
   int suma = 0;


for( int i=0; i<ROW;i++)
{
  for(int j=0; j<COL;j++)
    {
    	suma += array[i][j];
    }
}
printf(" la suma es [%d][%d]\n",ROW,COL );

return 0;
}
