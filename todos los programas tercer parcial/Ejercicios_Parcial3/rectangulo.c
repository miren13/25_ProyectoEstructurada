/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion: rectangulo ---------------------------------*/
/*---------------------------------------------------------*/

#include <stdio.h>


int main()
{
	int base, altura;
	printf("RECTANGULO CON * \n");
	printf("Ingrese la altura del rectangulo : ");
	scanf("%d", &altura );
	printf("Ingrese la base : ");
	scanf ("%d", &base );
	puts("\n");
	for (int i = 1; i <= altura; ++i)    
	{
		for (int i = 1; i <= base; ++i)
		{
			printf(" * ");   
		}
		printf("\n"); 
	}

	puts("\n");
	
	return 0;
}
