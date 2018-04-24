/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 20/04/2018 --------------------------*/
/*Fecha de actualizacion: 24/04/2018 ----------------------*/
/*Descripcion: Matriz Cuadrada ----------------------------*/
/*---------------------------------------------------------*/
#include <stdio.h>
 int main()
{
	 int cuadrado[3][3] = {{1, 2, 3,},{1, 2, 3},{1,2,3}};

	 int rectangular[3][5] = {{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};   /*en este rectangulo se imprimen 5 numeros en tres filas 
diferentes*/

	 int columna[5][1] = {{1},{2},{3},{4},{5}};   /* aqui en esta linea se imprimen 5 filas y un numero en cada fila*/
	printf("\n MATRIZ DE 3X3 \n\n");
	 for (int i = 0; i < 3; ++i )
	 {
		 for (int j = 0; j < 3; ++j )
		 {
			 printf (" %d ", cuadrado[i][j] );

		 }
		 printf("\n\n");

	 }
	 printf ("\n\nMATRIZ RECTANGULAR \n\n");

		 for (int i = 0; i < 3; ++i )

		 {
			 for (int j = 0; j < 5; ++j)

			 {
				 printf (" %d ", rectangular[i][j]);

			 }
			 printf ("\n\n");

		 }

		 printf ("\n\n MATRIZ EN COLUMNA \n\n");

		 for (int i = 0; i < 5; ++i )

		 {
			 for (int j = 0; j < 1; ++j)
			 {
				 printf ("%d",columna[i][j]);

			 }
			 printf ("\n");
		 }
	 return 0;
	 }
 




