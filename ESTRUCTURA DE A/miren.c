/*_________________________________________________________________*/
/* Autor: Nancy Miren Ramos Santos                                 */
/* E-mail : minkykpoper@gmail.com                        				   */
/* Fecha de Creacion : 22/05/2018                                  */
/* Fecha de Actualizacion : 24/05/2018                             */
/* Descripcion: Estructura  de tigres                              */
/*_________________________________________________________________*/

/* Biblioteca principal */
#include <stdio.h>
#include <string.h>
struct Tigres
{
	char especie[20];
	char genero[20];
	int altura;
	int peso;
	char color[20];
	int edad;
}Tigres[20];
int main(void)
{
	int opcion, n;
	printf("Tigres\n");
	printf("1.- Numero de Tigres a registrar\n");
	printf("2.- Imprimir datos de tigres \n");
	printf("3.- Salir\n");
	do{
		printf("\nIngrese una opcion : ");
			scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
				printf("Ingrese el numero de tigres a registrar : ");
					scanf("%d", &n);
				printf("\n\n\n" );
				for (int i = 0; i < n; ++i)
					{
					while(getchar() != '\n');   /* para leer cadenas*/
					printf("\nIngrese la especie del tigre : ");
					fgets(Tigres[i].especie, 20, stdin );
					strcpy(Tigres[i].especie, strtok(Tigres[i].especie, "\n"));
					while(getchar() != '\n');
					printf("\nIngrese el genero de tigre : ");
					fgets(Tigres[i].genero, 20, stdin);
					strcpy(Tigres[i].genero, strtok(Tigres[i].genero, "\n"));
					printf("\nIngrese la altura del tigre : ");
					scanf("%d", &Tigres[i].altura);
					printf("\nIngrese el peso del tigre : ");
					scanf("%d", &Tigres[i].peso);
					while(getchar() != '\n');
					printf("\nEl color del tigre : ");
					fgets(Tigres[i].color, 20, stdin);
					strcpy(Tigres[i].color, strtok(Tigres[i].color, "\n"));
					printf("\nLa edad  del tigre  : ");
					scanf("%d",&Tigres[i].edad);

						printf("\n\n\n");
					}
			break;

			case 2:
			for (int i = 0; i < n; ++i)
				{

					printf("\nEl genero de tigre %s: ", Tigres[i].genero);

					printf("\nLa altura del tigre %d : ", Tigres[i].altura);

					printf("\nEl peso del tigre %d : ", Tigres[i].peso );

					printf("\ncolor del tigre : %s", Tigres[i].color );

					printf("\nEdad  del tigre : %d", Tigres[i].edad );


					printf("\n\n\n");
				}
			break;

			case 3:
				printf("Saliendo del programa.\n");
			break;
		}
	}while (opcion < 4 && opcion > 0);
	return 0;
}
