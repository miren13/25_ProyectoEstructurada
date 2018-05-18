/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 28/04/2018 --------------------------*/
/*Fecha de actualizacion: 03/05/2018 ----------------------*/
/*Descripcion: estrutura ----------------------------*/
/*---------------------------------------------------------*/
#include <stdio.h>
struct alumno
{
  char nombre[30];
  int edad;
  float peso;
}alumno1 = {"Dali Lopez Martinez", 20, 90};
int main(void)
{
  printf("Estructura de un alumno\n" );
  printf("Nombre del alumno : %s\n", alumno1.nombre );
  printf("Edad del alumno : %d\n", alumno1.edad );
  printf("Peso del alumno : %.2f kg\n", alumno1.peso );
  return 0;
}
