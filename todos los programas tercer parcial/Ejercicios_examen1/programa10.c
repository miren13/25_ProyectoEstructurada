/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion: distancia entre dos puntos  ----------------*/
/*---------------------------------------------------------*/

#include <stdio.h> 
#include <math.h> 
int main(void)
{
  int x1,x2, y1,y2;
  float distancia;
  char c;
  printf("Distancia entre 2 puntos\n" );
  printf("Ingrese los datos del punto 1 separados por comas, ejemplo 3,4\n" );
  printf("Punto 1 : " );
    scanf("%d%c%d",&x1,&c,&y1 );
  printf("Punto 2 : " );
    scanf("%d%c%d",&x2,&c,&y2 );
  distancia = sqrt( pow((x2-x1), 2) + pow((y2-y1), 2) );
  printf("La distancia del punto %d%c%d al punto %d%c%d es de %.2f \n",x1,c,y1,x2,c,y2,distancia );
  return 0;
}
