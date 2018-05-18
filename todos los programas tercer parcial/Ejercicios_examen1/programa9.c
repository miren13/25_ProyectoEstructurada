/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion: numero positivo, negativo-------------------*/
/*---------------------------------------------------------*/

#include <stdio.h>
#include "funciones.h"
int main(void)
{
  int numero;/* declaracion de variables */
  printf("INDICA AL USUARIO SI EL NUMERO INGRESADO ES POSITIVO O NEGATIVO Y SI ES PAR O IMPAR \n" );
  printf("Ingrese un numero : " );/* Solicita el dato al usuario */
    scanf("%d", &numero );
  numero_par_o_impar(numero);
  positivo_o_negativo(numero);
  return 0;
}
