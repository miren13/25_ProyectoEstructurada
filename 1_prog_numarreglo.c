/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren                          */
/*E mail : Minkykpoper@gmail.com                           */
/*Fecha de Creacion: 13/04/2018                            */
/*Fecha de actualizacion: 14/04/2018                       */
/*Descripcion:  Arreglo de numeros que se repiten          */
/*---------------------------------------------------------*/


/*declaracion de bibliotecas*/
#include <stdio.h>
#define  TAM 10
int main (void)
{
/* Declaracion e inicializacion del arreglo */
  int arreglo [TAM]= {0,1,2,3,3,7,8,9,9,10};
  int contador=0;
  int i,j;
  for (i=0; i<TAM; i++)
    {
      contador=0;
      for (j=0; j<TAM; j++)
        {
          if (i == arreglo[j])
          {
            contador++;
          }
        }
      printf ("el  numero %d se repite %d veces \n", i, contador);
    }
    return  0;
}
