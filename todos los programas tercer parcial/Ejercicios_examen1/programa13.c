/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion: suma de numeros pares e imapares  ----------*/
/*---------------------------------------------------------*/

#include <stdio.h>
int main(void)
{
    int num,sumapares=0,sumaimpares=0;
    printf("\n");

for (int i = 1; i <=100; i++)
{
  if (i % 2 ==0)
  {
    sumapares  += i;
  }else
  {
    sumaimpares  += i;
  }
}
printf("\nel resultado de la suma de los pares es %d",sumapares );
printf("\nel resultado de la suma de los numeros impares es %d",sumaimpares );
  return 0;
}
