#include <stdio.h>

void cambiarValor(int *x,int *y);

 int main(void)
 {
   int a = 10;
   int b =  5;


   printf("\nentrada 1 a: %d            b: %d\n", a, b );
   cambiarValor(&a,&b)
   printf("\nentrada 2 a: %d            b: %d\n", a, b );
   return 0;
}

void cambiarValor(int *x,int *y)
{
  int aux;
  aux = *x;
  *x = *y;
  * = aux;
}
