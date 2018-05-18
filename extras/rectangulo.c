/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 28/04/2018 --------------------------*/
/*Fecha de actualizacion: 03/05/2018 ----------------------*/
/*Descripcion: Matriz Cuadrada ----------------------------*/
/*---------------------------------------------------------*/




/* Declaracion de la biblioteca principal */
#include <stdio.h>

/* Funcion principal */
int main()
{
	int base, altura;
	printf("RECTANGULO CON * \n");
	printf("Ingrese la altura del rectangulo : ");
	scanf("%d", &altura );
	printf("Ingrese la base : ");
	scanf ("%d", &base );
	puts("\n");
	for (int i = 1; i <= altura; ++i)    /* Doble ciclo for, el primero para controlar la altura y el segundo para controlar la base*/
	{
		for (int i = 1; i <= base; ++i)
		{
			printf(" * ");   /* Imprime en pantalla el numero de * de la base*/
		}
		printf("\n"); /* Salto de line cuando se impriman los primeros n asteriscos de la base */
	}

	puts("\n");
	
	return 0;
}
