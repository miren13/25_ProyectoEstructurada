/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion:  numero menory mayor       -----------------*/
/*---------------------------------------------------------*/

  #include <stdio.h>
int main(void)
{
	int a, arreglo[10], ord, cont = 1;
	for ( a = 0; a < 10; ++a);

	{
		printf("Ingrese el %d numero : " , cont );
			scanf("%d", &arreglo[a]);
	cont ++;
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
	printf("El numero menor es %d \n", arreglo[0]);
	printf("El numero mayor es %d \n", arreglo[9]);
	return 0;
