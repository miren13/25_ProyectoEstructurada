#include <stdio.h>
int main(void)
{
  int num, resultado, var;
  printf("escribe un numero : " );
    scanf("%d", &num );
  resultado = num;
  for (int i = num-1; i >= 1; i--)
  {
      resultado = resultado * i;
  }
printf("%d! = %d\n", num, resultado );
  return 0;
}
