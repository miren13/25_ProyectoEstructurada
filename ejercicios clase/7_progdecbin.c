/*_________________________________________________________________*/
/* Autors:Nancy Miren Ramos Santos                                 */
/* E-mail :minkykpoper@gmail.com                           			   */
/* Fecha de Creacion : 25/04/2018                                  */
/* Fecha de Actualizacion : 25/04/2018                             */
/* Descripcion: conversion de numeros                              */
/*_________________________________________________________________*/



#include <stdio.h>
int main(void)

{
  int i = 0, y = 0, num,divi, conversion[90],cont = 0; /*declaracion de variables*/
  printf("CONVERSION DE DECIMAL A BINARIO \n\n");        /*titulo del programa*/

  printf("dame el numero \n" );   /*pide datos al usuario*/

  scanf("%d",&num );   /*lee los datos*/

  divi=num;      /* operacion*/

  while (divi>0)  /* ciclo while  controla las veces que se tiene que dividir entre dos*/

 {

   conversion[cont]=divi%2;      /*asigna el valor 0 o 1 para realizar la conversion*/

   divi=divi/2; /* operacion*/

   cont++;  /*aumenta contador*/
}

  for (int i = cont-1; i >=0; i--)  /*imprime el arreglo */

   {

    printf("%d",conversion[i]); /* muestra el resultado en pantalla*/

  }





  return 0;
}
