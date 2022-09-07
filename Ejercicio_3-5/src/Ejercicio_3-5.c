/*
 Ejercicio 3-5:
 Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.

 int Sumar1(int, int);
 int Sumar2(void);
 void  Sumar3(int, int);
 void Sumar4(void);


 Division: 1E / 1F
 Apellido: Cantos
 Nombre: Santiago Felipe
 Dni: 42.587.701
 */

#include <stdio.h>
#include <stdlib.h>

int sumar1(int num1 , int num2);
int sumar2(void);
void sumar3(int num1 , int num2);
void sumar4(void);

int main(void)
{
	setbuf (stdout , NULL);

	sumar4 ();
	return EXIT_SUCCESS;
}

int sumar1(int num1 , int num2)
{
	return num1 + num2;
}

int sumar2()
{
	int num1;
	int num2;

	printf ("ingrese el numero uno: ");
	scanf ("%d" , &num1);
	printf ("ingrese el numero dos: ");
	scanf ("%d" , &num2);

	return num1 + num2;
}

void sumar3(int num1 , int num2)
{
	printf ("el resultado es: %d" , num1 + num2);
}

void sumar4()
{
	int num1;
	int num2;

	printf ("ingrese el numero uno: ");
	scanf ("%d" , &num1);
	printf ("ingrese el numero dos: ");
	scanf ("%d" , &num2);

	printf ("el resultado es: %d" , num1 + num2);
}

