/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion:  suma de numeros    ------------------------*/
/*---------------------------------------------------------*/

#include <stdio.h>
int main(void)
{
  int n, suma; 
  printf("Formula para sumar los primeros 100 numeros enteros\n" );
  printf("Ingrese un numero : " );
    scanf("%d", &n );
  suma = (n*(n+1))/2;
  printf("La suma de los primeros %d numeros es de : %d\n", n, suma  );
  return 0;
}
