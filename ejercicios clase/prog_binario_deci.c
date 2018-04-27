/*------------------------------------------------------------*/
/* Autor: Ramos Santos Nancy Miren                            */
/* e-mail: minkykpoper@gmail.com                              */
/* fecha de creacion: 25/04/18                                */
/* fecha de actualizacion: 26/04/18                           */
/* Descripcion: conversion de numeros                         */
/*------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>
int main(void)
{
int num_dig,i,j,resul,binario,sum=0,q;
printf("CONVERSION DE BINARIO A DECIMAL\n\n", );

  puts("Dame el numero a convertir");
  scanf("%d",&num_dig);
  int array[num_dig];
  if (num_dig>0)
  {
    for(i=0;i<num_dig;i++)
    {
      printf("Ingresa el numero\n");
      scanf("%d",& array[i]);
      q=array[i] * pow(2,i);
      sum=sum+q;
    }
  }
  printf(" El numero decimal es el siguiente %d\n",sum);


  return 0;
}
