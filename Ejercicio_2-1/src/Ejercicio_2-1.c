/*
 Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la aplicación con distintos valores.
 Ejemplo 1:  3 - 5 - 7 - 9 - 1
 Ejemplo 2:  2 - 1 - 8 - 1 - 2


 Division: 1E / 1F
 Apellido: Cantos
 Nombre: Santiago Felipe
 Dni: 42.587.701
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int num;
	int numSuma = 0;
	float promedio;

	for (int i = 0; i < 5; i++)
	{
		printf("ingrese un numero: ");
		scanf("%d", &num);
		numSuma += num;
	}

	promedio = (float) numSuma / 5;

	printf("el promedio de los numeros ingresados es: %.2f", promedio);

	return EXIT_SUCCESS;
}

