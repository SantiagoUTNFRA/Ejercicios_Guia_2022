/*
 Ejercicio 3-4:
 Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.


 Division: 1E / 1F
 Apellido: Cantos
 Nombre: Santiago Felipe
 Dni: 42.587.701
 */

#include <stdio.h>
#include <stdlib.h>

int getInt(int rangoMin , int rangoMax);

int main()
{
	setbuf (stdout , NULL);

	getInt (0 , 500);

	return 0;
}

int getInt(int rangoMin , int rangoMax)
{
	int num;
	printf ("ingrese un numero: ");
	scanf ("%d" , &num);
	while (num < rangoMin || num > rangoMax)
	{
		printf ("error, ingrese un numero dentro del rango: ");
		scanf ("%d" , &num);
	}

	return num;
}
