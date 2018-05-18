/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion: eleccion de votos     ----------------------*/
/*---------------------------------------------------------*/


#include <stdio.h> 
int main(void)
{
  int edad;
  printf("\nMayor de edad\n" );
  printf("Ingrese su edad : " );
    scanf("%d", &edad );
  if (edad >= 18)
  {
    printf("Puede votar en las elecciones \n");
  }else
      {
        printf("Usted no puede votar :´v\n" );
      }
  return 0;
}
