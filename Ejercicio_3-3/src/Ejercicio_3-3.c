/*
 Ejercicio 3-3:
 Crear una función que pida el ingreso de un entero y lo retorne.


 Division: 1E / 1F
 Apellido: Cantos
 Nombre: Santiago Felipe
 Dni: 42.587.701
 */

#include <stdio.h>
#include <stdlib.h>

int getInt();

int main()
{
	setbuf(stdout, NULL);

	if (getInt() == 5)
	{
		printf("funcion ok");
	}
	else
	{
		printf("todo mal loco");
	}

	return 0;
}

int getInt()
{
	int num;
	printf("ingrese un numero: ");
	scanf("%d", &num);

	return num;
}
