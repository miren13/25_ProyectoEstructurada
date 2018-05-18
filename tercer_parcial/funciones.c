#include <stdio.h>

/*declaracion de la estructura*/
struct Alumnos
{
  int edad;
};

typedef struct
{
  char titulo[30];
}libro;


/* Prototipos de la funcion | */

/*Prototipo de la funcion*/
void  imprimirMensaje(void);



int areaRectangulo(int base, int altura);

/*apuntadores funciones con arreglos*/
/*sin el typedef*/
struct Alumnos nuevoAlumno(void);
/*con el typedef*/
libro nuevolibro(void);



int main (void)
{
  int base = 10;
  int altura = 5;
  /*hacer la llamada a la funcion imprimir mensaje*/
  /*invocar a la funcion  imprimir mensaje*/
  imprimirMensaje();

  int area = areaRectangulo(base, altura);
  printf("\nel area del rectangulo es de %d ",area );
  /*invocacion de funciones con estructuras*/
  struct Alumnos alumnoUnsis = nuevoAlumno();
  libro libroLiteratura = nuevolibro();

printf("\n la edad del alumno es %d",alumnoUnsis.edad );
printf("\nel titulo del libro es %s",libroLiteratura.titulo );
  return 0;
}

struct Alumnos nuevoAlumno(void)
{
  struct Alumnos alumno1 = {25};
  return alumno1;
}



libro nuevolibro(void)
{
  libro libro1 = {"cien años de soledad"};
  return libro1;
}


int areaRectangulo(int base, int altura)
{
  /*int resultado = base * altura*/
  return base * altura;
}


void  imprimirMensaje(void)
{
  printf("estas en la funcion imprimir mensaje\n" );
}
