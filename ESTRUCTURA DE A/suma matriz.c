#include <stdio.h>
#include <stdbool.h>


#define ROW 10
#define COL 10

bool validarSumaMatriz(int filaA, int COLA, int filaB, int COLB);
  void leerDatosMatriz( int matriz[ROW][COL], int fila, int columna);
  void imprimirMatriz( int matriz[ROW][COL], int fila, int columna);
  void sumarMatriz(int  matrizA[ROW][COL],  int matrizB[ROW][COL], int matrizResultado[ROW][COL], int fila, int col);

 int main(void)
 {
   int filaA, COLA;
   int filaB,  COLB;

   int matrizA[ROW][COL];
   int matrizB[ROW][COL];
   int matrizResultado[ROW][COL];

   printf("\nIntroduce  la fila de la matriz A:\n");
   scanf("%d",&filaA );


   printf("\nIntroduce  la columna de la matriz A:\n");
   scanf("%d",&COLA );

   printf("\nIntroduce  la fila de la matriz B:\n");
   scanf("%d",&filaB );

   printf("\nIntroduce  la columna  de la matriz B:\n");
   scanf("%d",&COLB );

   if (validarSumaMatriz(filaA, COLA,filaB,COLB))
   {

    /*validar suma de matriz*/
    printf("\n si se puede realizar la operacion\n" );
    leerDatosMatriz(matrizA, filaB, COLA);
    leerDatosMatriz(matrizA, filaB, COLA);

    imprimirMatriz(matrizA,filaA,COLA);
    imprimirMatriz(matrizB,filaB,COLB);

  sumarMatriz(matrizA, matrizB,matrizResultado, filaA,COLA);
  printf("\nel resultado  de la suma es: \n");
  imprimirMatriz(matrizResultado,filaA,COLB);


   }else{


     printf("\nNo se  puede realizar  la suma  de matrices \n" );
   }
   return 0;
}
void sumarMatriz(int  matrizA[ROW][COL],  int matrizB[ROW][COL], int matrizResultado[ROW][COL], int fila, int col)
{
  for (int  i = 0; i < fila; i++)
  {
    printf("  | " );
    for (int  j = 0; j < COL; j++)
    {
      printf("\nIntroduce el elemento [%d][%d]\n",i, j);
      scanf("%d", &matriz[i][j] );
    }
  }
}

void leerDatosMatriz( int matriz[ROW][COL], int fila, int columna)
{
for (int  i = 0; i < fila; i++)
{
  for (int  j = 0; j < columna; j++)
  {
    matrizResultado[i][j]= matrizA[i][j]=matrizB[i][j];
  }
}
}
void imprimirMatriz( int matriz[ROW][COL], int fila, int columna)
{
  printf("\n\n" );
for (int  i = 0; i < fila; i++)
{
  printf("  | " );
  for (int  j = 0; j < COL; j++)
  {
    printf("\nIntroduce el elemento [%d][%d]\n",i, j);
    scanf("%d", &matriz[i][j] );
  }
}
}



bool validarSumaMatriz(int filaA, int COLA, int filaB, int COLB)

{
  if ((filaA == filaB) && (COLA == COLB))
  {
    return true;
    }
    return false;
}
