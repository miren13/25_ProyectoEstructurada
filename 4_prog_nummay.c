/*_________________________________________________________________*/
/* Autors:Nancy Miren Ramos Santos                                 */
/* E-mail :minkykpoper@gmail.com            			   */
/* Fecha de Creacion : 14/04/2018                                  */
/* Fecha de Actualizacion : 17/04/2018                             */
/* Descripcion: el  numero mayor                                   */
/*_________________________________________________________________*/

/* Biblioteca principal */
#include <stdio.h>
int main()

{
	int arreglo[10], ord; /* Declaracion de variables */
	

	
	for (int i = 0; i < 10; ++i)/* pide datos al usuario */
	
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
				arreglo[j+1] = ord
		}
	} /* Imprime los resultado en pantalla */
	printf("El numero menor es %d \n", arreglo[0]);
	printf("El numero mayor es %d \n", arreglo[9]);
	return 0;
}
