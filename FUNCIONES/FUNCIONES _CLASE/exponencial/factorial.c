/*------------------------------------------------------------*/
/* Autor: Ramos Santos Nancy Miren                            */
/* e-mail: minkykpoper@gmail.com                              */
/* fecha de creacion: 07/05/18                                */
/* fecha de actualizacion: 07/05/18                           */
/* Descripcion: POTENCIA FACTORIAL                            */
/*------------------------------------------------------------*/


/* Declaracion de biblioteca principal de entrada y salida*/
#include <stdio.h>

/* Funcion principal*/
int main()
{
	double numero, var = 1, count;	/* Declaracion de multiples variables*/

	puts("FACTORIAL DE UN NUMERO \n");

		printf("Ingrese el numero : ");

		scanf("%lf", & numero);

			for (int i = 1 ; i <= numero; ++i)
			{
				count = var * i;   /* Operacion para sacar el valor de un numero n facotial */

				var = count;       	/* Un numero facotiral es la multiplicacion de todos sus digitos anteriores*/
			}
			printf("%.0lf! = %.0lf\n", numero, count ); /* Imprime numeros dobles para evitar problemas de digitos a mostar*/



	return 0;
}
