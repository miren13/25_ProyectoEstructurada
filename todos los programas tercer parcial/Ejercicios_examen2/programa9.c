/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E-mail: minkykpoper@gmail.com ---------------------------*/
/*fecha  de creacion: 28/04/2018 --------------------------*/
/*Fecha de actualizacion: 03/05/2018 ----------------------*/
/*Descripcion: estrutura libro ----------------------------*/
/*---------------------------------------------------------*/

#include <stdio.h>
struct libro
  char titulo[50];
  char autor[30];
  int paginas;
}libro1 = {"Volar sobre el pantano", "Carlos Cuauhtémoc Sánchez", 250};/* asigna los valores a una variable */
int main(void)
{/* Imprime los datos en pantalla  */
  printf("Creacion de una estructura de un libro\n" );
  printf("Titulo : %s\n", libro1.titulo );
  printf("Autor : %s\n", libro1.autor );
  printf("Paginas : %d\n", libro1.paginas );
  return 0;
}
