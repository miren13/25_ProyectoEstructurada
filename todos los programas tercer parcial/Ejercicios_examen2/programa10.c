/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion: asientos de un autobus     -----------------*/
/*---------------------------------------------------------*/
#include <stdio.h>

int main(void)

{
    int numero_de_asiento;
    int asientos[35] = {0};

    for(int i = 0; i<35; i++);
    {
    	printf("Igrese un numero de asiento :");
    		scanf("%d", &numero_de_asiento);
    if (asientos[numero_de_asiento-1] == 0)
    {
    printf("El asiento esta disponible");
    }else
   {
   printf("no se encuentra el asiento, buscar otro asiento\n");
   }
  numero_de_asiento = 0;
}
  return 0;
	}
