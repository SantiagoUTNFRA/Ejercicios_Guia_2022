/*
 Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número.
 Utilizar la función PedirNumero de la ejercitación 3-4.
 Por ejemplo:
 5! = 5*4*3*2*1 = 120

 Division: 1E / 1F
 Apellido: Cantos
 Nombre: Santiago Felipe
 Dni: 42.587.701
 */

#include <stdio.h>
#include <stdlib.h>

int getInt(int rangoMinimo , int rangoMaximo);
int factorial(int num);

int main(void)
{
	setbuf (stdout , NULL);
	int numero = getInt (0 , 100);

	factorial (numero);
	printf ("Factorial de %d es: %d\n" , numero , factorial (numero));

	return EXIT_SUCCESS;
}

int getInt(int rangoMinimo , int rangoMaximo)
{
	int num;

	printf ("ingrese un numero: ");
	scanf ("%d" , &num);
	while (num <= rangoMinimo || num > rangoMaximo)
	{
		printf ("error, ingrese un numero: ");
		scanf ("%d" , &num);
	}

	return num;
}

int factorial(int num)
{
	long result = 1;

	for (int i = 1; i <= num; i++)
	{
		result = result * i;
	}

	return result;
}

