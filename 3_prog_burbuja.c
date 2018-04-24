/*_________________________________________________________________*/
/* Autor : Ramos Santos Nancy Miren                                */
/* E-mail : minkykpoper@gmail.com            			   */
/* Fecha de Creacion : 14/04/2018                                  */
/* Fecha de Actualizacion : 17/04/2018                             */
/* Descripcion: Ordenacion de un arreglo                           */
/*_________________________________________________________________*/

/* Biblioteca principal */
#include <stdio.h>
int main()

{

	int arreglo[10], ord; /* Declaracion de variables */
	
	
	
	for (int i = 0; i < 10; ++i)/* pide  datos al usuario */
	
	{
		printf("Ingrese el %d numero : ", i+1 );
			scanf("%d", &arreglo[i]);
	}
	
	for (int i = 0; i < 10; ++i) 
	
	{
		for (int j = 0; j < 10; ++j)
		
		{
	
			if (arreglo[j]>arreglo[j+1])
		
			{
				ord = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = ord;
			}
		}
	} 


	
	for (int i = 0; i < 10; ++i)
	
	{
	
		printf("%d\n", arreglo[i] );
	}

	return 0;
}
