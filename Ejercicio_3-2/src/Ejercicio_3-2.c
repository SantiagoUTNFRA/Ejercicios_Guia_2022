/*
 Ejercicio 3-2:
 Crear una función que permita determinar si un número es par o no. La función retorna 1 en caso afirmativo y 0 en caso contrario.
 Probar en el main.


 Division: 1E / 1F
 Apellido: Cantos
 Nombre: Santiago Felipe
 Dni: 42.587.701
 */

#include <stdio.h>
#include <stdlib.h>

int checkPar(int num);

int main()
{
	setbuf(stdout, NULL);

	if (checkPar(17) == 1)
	{
		printf("el numero es par");
	}
	else
	{
		printf("el numero es impar");
	}

	return 0;
}

int checkPar(int num)
{
	int ok = 0;

	if (num % 2 == 0)
	{
		ok = 1;
	}

	return ok;
}
