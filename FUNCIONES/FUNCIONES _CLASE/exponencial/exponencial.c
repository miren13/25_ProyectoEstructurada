/*------------------------------------------------------------*/
/* Autor: Ramos Santos Nancy Miren                            */
/* e-mail: minkykpoper@gmail.com                              */
/* fecha de creacion: 07/05/18                                */
/* fecha de actualizacion: 07/05/18                           */
/* Descripcion: POTENCIA FACTORIAL                            */
/*------------------------------------------------------------*/


#include  <stdio.h>

double exponente (double base, int exponente);


int main (void)
{
  /*resolver la exponencial*/

    int base, exponente,resultado;
    printf("resolucion del problema \n" );

    printf("ingrese la base\n");
    scanf("%d",&base );

    resultado=base

    printf("ingrese el exponente\n");
    scanf("%d",&exponente );

    if(exponente ==0)
    {
      resultado=1;
    }else if (exponente ==1){
      resultado = base

    } else {

    for( int i=1; i<exponente; i++)


    {
    resultado *=base;
    }
  }


  printf(" el resultado es %lf \n",resultado );

    return 0;
}




double exponente (double base, int exponente)


{
  return 0;
}



if(exponente ==0)
{
  resultado=1;
}else if (exponente ==1){
  resultado = base

} else {

for( int i=1; i<exponente; i++)


{
resultado *=base;
}
}
