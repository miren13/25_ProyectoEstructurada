#include <stdio.h>

void cambiarValor(int, int);

int main(void)

{
  int x = 5;
  int y = 10;

  printf("\n x: %d\n",x );
  printf("\n y: %d \n",y );



  printf("\n cx: %p \n",&x );
  printf("\n cy: %p \n",&y);

cambiarValor(x,y);

printf("\n x: %d\n",x );
printf("\n y: %d \n",y );



printf("\n x: %p \n",&x );
printf("\n y: %p \n",&y);

  return 0;
}
void cambiarValor(int x, int y)
{

  printf("\n fx: %d\n",x );
  printf("\n fy: %d \n",y );



  printf("\n x: %p \n",&x );
  printf("\n y: %p \n",&y);
  int temporal ;
  temporal = x;
   y = temporal;
   x = y;
}
