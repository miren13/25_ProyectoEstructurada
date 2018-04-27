/*------------------------------------------------------------*/
/* Autor: Ramos Santos Nancy Miren                            */
/* e-mail: minkykpoper@gmail.com                              */
/* fecha de creacion: 25/04/18                                */
/* fecha de actualizacion: 27/04/18                           */
/* Descripcion: arreglo bidimensional                         */
/*------------------------------------------------------------*/


#include<stdio.h>     
#include<stdlib.h>    
#include<time.h>   

/*Definicion de constantes*/
#define ROW 3        
#define COL 3        
#define MAX 1000     

/*Funcion principal*/
int main (void)
{
  int array[ROW][COL];          
  srand((unsigned)time(NULL));  

/*inicia el ciclo for*/
for(int i=0; i<ROW;i++) 
{
  printf("{");

    for(int j=0; j<COL;j++) 
    {
      printf("%d", array[i][j]);
      

      
      array[i][j]=rand()%(MAX+1); /*llena el arreglo con datos aleatorios*/
      
    }
}


/*imprime el titulo del programa*/
printf("\x1b[32m Datos aleatorios de la matriz: array[%d][%d]\n",ROW,COL );   
printf("\x1b[42m Otro mensaje\n]");                                         
printf("\x1b[0m Otro mensaje\n");                   


/*imprime los datos obtenidos*/
printf("\n");                                 
    for (int i=0 ; i<ROW; i++)                 
      {
        printf("{");
        for(int j=0 ; j<COL ; j++)            
        {
          printf("%d ", array[i][j]);       
        }
        printf("}\n");                         
      }

return 0;
}
