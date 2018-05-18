/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion: indice de masa corporal---------------------*/
/*---------------------------------------------------------*/



#include <stdio.h> 
#include "funciones.h" /*  */
float imc(float peso, float estatura);
int main(void)
{
  float IMC, peso, estatura;
  printf("Indice de Masa Corporal\n" );
  printf("Ingrese su peso : " );
    scanf("%f", &peso );
  printf("Ingrese su estatura : " );
      scanf("%f", &estatura );
  IMC = imc( peso, estatura);
  printf("Su IMC es de : %.2f \n", IMC );
  saludoscd();
  return 0;
}
float imc(float peso, float estatura)
{
  return peso/(estatura * estatura);
}
