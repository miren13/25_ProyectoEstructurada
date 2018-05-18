/*---------------------------------------------------------*/
/*Autor: Ramos Santos Nancy Miren -------------------------*/
/*E mail : Minkykpoper@gmail.com  -------------------------*/
/*Fecha de Creacion: 02/05/2018----------------------------*/
/*Fecha de actualizacion: 02/05/2018-----------------------*/
/*Descripcion:  --------------------------------- ---------*/
/*---------------------------------------------------------*/



#include <stdio.h>
/*declaracion de prototipo de la  funcion*/
int suma (int x, int y);
float resta (float x, float y);
double multiplicacion (double x, double y);

int main(void)

{
  printf("\n la suma de x= %d + y =%d \n", 5,7, suma(5,7) );
  printf("\n la resta de x= %f - y =%f \n", 5.5,7.5, resta(5.5,7.5) );
  printf("\n la multiplicacion de x= %lf * y =%lf \n", 5.5,7.5, multiplicacion(5.5,7.5) );


  /*verificar cuantos tipo dedatos usa un byte*/

printf("\n el tamaño de  un int es %d",sizeof(int));
printf("\n el tamaño de  un char es %d",sizeof(char));
printf("\n el tamaño de  un float es %d",sizeof(float));
printf("\n el tamaño de  un double es %d",sizeof(double));
printf("\n el tamaño de  un short  es %d"sizeof(short));
printf("\n el tamaño de  un long es%d",sizeof(long));

return 0; /*terminacion existosa*/
}

/*implementar la funcion suma*/

int suma (int x, int y)
{
  return x + y;
}

float resta (float x, float y)
{
  return x - y;
}

double multiplicacion (double x, double y)

{
  return x * y;
}
