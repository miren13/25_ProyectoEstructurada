/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 17/05/2018 --------------------------*/
/*Fecha de actualizacion: 18/05/2018 ----------------------*/
/*Descripcion: numeromayor, menor  ------------------------*/
/*---------------------------------------------------------*/


#include <stdio.h>
int main(void)
{
  int numero[3], var;
  printf("El mayor de 3 numeros\n" );
  for (int i = 0; i < 3; i++)
  {
    printf("Ingrese el %d numero : ", i+1 );
      scanf("%d", &numero[i] );
  }

  for (int i = 0; i < 3; i++) 
  {
    for (int j = 0; j < 3; j++)
    {
      if (numero[i] > numero[j])
      {
        var = numero[j];
        numero[j] = numero[i];
        numero[i] = var;
      }
    }
  }
  printf("EL numero menor es %d\n", numero[2] ); 
  printf("EL numero mayor es %d\n", numero[0] );
  if (numero[0] == numero[1] && numero[1] == numero[2])
  {
    printf("Los numeros son iguales \n");
  }
  return 0;
}
