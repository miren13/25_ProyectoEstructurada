/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 28/04/2018 --------------------------*/
/*Fecha de actualizacion: 03/05/2018 ----------------------*/
/*Descripcion: piramide -----------------------------------*/
/*---------------------------------------------------------*/



#include <stdio.h>
/*Funcion principal*/
int main(void)
{
	int altura, espacios;
	printf("RECTANGULO CON * \n");
	printf("Ingrese la altura del rectangulo : ");
	scanf("%d", &altura );                        
	puts("\n");
	for (int i = 1; i <= altura ; ++i) 
	{
		
		for (int espacios = 1; espacios <= altura -i; espacios++) 
		{                                                               
			printf(" ");                     
		}
		for (int j = 1; j <= (2*i)-1 ; ++j) 
		{
			printf("*"); 
		}
		printf("\n");

	}
	puts("\n");
	
	return 0;
}
