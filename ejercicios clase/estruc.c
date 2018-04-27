/*_________________________________________________________________*/
/* Autors:Nancy Miren Ramos Santos                                 */
/* E-mail :minkykpoper@gmail.com                           			   */
/* Fecha de Creacion : 25/04/2018                                  */
/* Fecha de Actualizacion : 25/04/2018                             */
/* Descripcion: el  alumno                                         */
/*_________________________________________________________________*/

/* Biblioteca principal */
#include <stdio.h>
#define TAM 15
/*color del texto*/
#define  RESET"\x 1b[29m]"
#define  NEGRO"\x 1b [30m]"
#define  ROJO"\x 1b [31m]"
#define  VERDE"\x 1b [32m]"
#define  AMARILLO"\x 1b [33m]"
#define  AZUL"\x 1b [34m]"
#define  MORADO"\x 1b [35m]"
#define  CYAN"\x 1b [36m]"

# define NEGRITA "\x1b[1n]"


/*definicion tamaños constantes  de arreglo*/

#define TAM 20
#define ROW 5
#define COL 5

/*DEFINICION  DE TIPOS DE DATOS DE ESTRUCTURA*/

/*
struct nombreEstructura
{
miembro de la estructura
char matricula[10];
char curp[18];
char nivelestudio[30];
char nombre[50];
int edad;
char sexo[1];
char fechanacimiento[10];
float peso;
float estatura;
char tipo sangre;
char telefono[12];
char direccion[50];
char alergia[20];
char deporte[15];

};
*/
struct Alumno
{
  char matricula[10];
  char nombre[50];
  char sexo[1];
  int edad;
  float peso;
  float estatura;
};

int main(void)
{
  /*declaracion de la  estructura alumno*/

  struct Alumno edson.;
  /*asignacion de datos  a los miembros de la estructura Alumno*/
  struct edson.matricula







  return 0;
}
