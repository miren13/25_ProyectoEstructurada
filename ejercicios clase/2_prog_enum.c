/*--------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren ------------------*/
/*E_mail: minkykpoper@gmail.com --------------------*/
/*Fecha de Creacion: 24/04/2018 --------------------*/
/*Fecha de Actualizacion: 24/04/2018 ---------------*/
/*Descripcion:  arreglo de constantes ------------- */

#include<stdio.h>

/*Definicion de constantes*/
#define ROW 3 /*Numero de filas de la matriz*/
#define COL 3 /*Numero de columnas de la matriz*/
#define MAX 100 /*rango superior de los datos aleatorios*/

int main (void)
{
  int array[ROW][COL];

/*Inicializar el array con valores enteros aleatorios 1-100*/
for(i=0; i<ROW;i++) /*ciclo que controla las filas del array*/
{
  printf("{");
/*asignacion de datos a array*/
    for(int j=0; j<COL;j++) /*ciclo que controla las columnas del array*/
    {
      printf("%d, ", array[j])
      /*asignacion de datos al array*/
      /*utilizar la funcion scanf() para solicitar datos al usuario*/

      /*utilizar la funcion rand[] para obtener datos de forma aleatoria*/
      /*La funcion se encuentra definida dentro de la biblioteca stdio.h*/
      array[i][j]=rand()%(MAX+1);
      /*Tarea: el dia viernes 27 de abril*/
      /*generar valores aleatorios de tipo flotante entre 0-1000*/
    }
}
printf("\xlb[32m Datos aleatorios de la matriz: array[%d][%d]\n",ROW,COL );

return 0;
}
