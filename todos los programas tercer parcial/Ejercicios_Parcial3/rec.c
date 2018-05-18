/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion:rectangulo  ---------------------------------*/
/*---------------------------------------------------------*/


#include <stdio.h>
#define TAMFIG 9
	
  void dibujarFiguraContornoX(int tamanio);
	int main(void)
   {
	dibujarFiguraContornoX(TAMFIG);
	return 0;
   }

  void dibujarFiguraContornoX(int tamanio)
  {
	for(int i = 0; i < tamanio; i ++)
  {
	for(int j = 0; j < tamanio; j++)
  {
	if((i == 0 || i == j) || j == 0 || j == (tamanio - 1))
  {
	printf("*");
  }else if(j == ((tamanio -1) - i) || i == (tamanio - 1))
  {
	printf("*");
  }else{
	printf(" ");
  }
  }
	printf("\n");
  }
  }
