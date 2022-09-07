/*
 Ejercicio 3-1:
 Crear una función que muestre por pantalla el número flotante  que recibe como parámetro.


 Division: 1E / 1F
 Apellido: Cantos
 Nombre: Santiago Felipe
 Dni: 42.587.701
 */

#include <stdio.h>
#include <stdlib.h>

int printFloat(float num);

int main()
{
	setbuf(stdout, NULL);

	printFloat(5);

	return 0;
}

int printFloat(float num)
{
	int ok = 0;

	if (printf("%.2f", num))
	{
		ok = 1;
	}

	return ok;
}

