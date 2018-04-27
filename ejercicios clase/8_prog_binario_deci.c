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
int num = 1,suma=0,contador, binarios[15], var;   /*declaracion de variables*/
printf("CONVERSION DE BINARIO A DECIMAL\n\n");   /*titulo del programa*/

  puts("Dame el numer de elemntos del codigo binario"); /* pide datos al usuario*/
  scanf("%d", &var );
  for (int i = var -1; i >= 0; i--)
  {
    printf("Ingrese el %d elemento : ", num );
      scanf("%d", &binarios[i] );
    num++;
  }
  for (int i = 0; i < var; i++)
  {
    if (binarios[i]== 1)
    {
      contador = pow(2,i);
      suma = suma + contador;
    }
  }
  printf("Su valor en decimal es %d\n",suma );
  return 0;
}
