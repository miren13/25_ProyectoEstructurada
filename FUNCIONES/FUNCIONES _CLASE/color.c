#include <stdio.h>

#include "colores.h"




#define _negrita "\e[lm"
#define _tverde "\x1b[32m"

int main (void)
{
printf(_tverde _negrita "\nHola mundo");
return 0;
}

void imprimir menu();
int main (void)
