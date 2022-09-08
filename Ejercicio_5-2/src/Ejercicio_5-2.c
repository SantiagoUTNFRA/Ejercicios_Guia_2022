/*
 Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
 Cantidad de positivos y negativos.
 Sumatoria de los pares.
 El mayor de los impares.
 Listado de los números ingresados.
 Listado de los números pares.
 Listado de los números de las posiciones impares.
 Anexo 5-2
 Los números que se repiten
 Los positivos creciente y los negativos de manera decreciente
 Se deberán utilizar funciones y vectores.

 Division: 1E / 1F
 Apellido: Cantos
 Nombre: Santiago Felipe
 Dni: 42.587.701
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int getNumero(int numeros[], int tam);
int printNumero(int numeros[], int tam);
int validateRange(int )

/*
 * TODO: hacer funciones con vectores de operaciones basicas
 *
 * int sumarVector(int numeros[], int tam);
 * int restarVector(int numeros[], int tam);
 * int multiplicarVector(int numeros[], int tam);
 * int dividirVector(int numeros[], int tam);
 * int factorialVector(int numeros[], int tam);
 */

int main(void)
{
	setbuf(stdout, NULL);

	int vecNumeros[5];

	getNumero(vecNumeros, TAM);
	printNumero(vecNumeros, TAM);

	return EXIT_SUCCESS;
}

int getNumero(int numeros[], int tam)
{
	int todoOk = -1;
	if (numeros != NULL)
	{
		for (int i = 0; i < tam; i++)
		{
			printf("ingrese un numero: ");
			scanf("%d", &numeros[i]);
		}
		todoOk = 0;
	}
	return todoOk;
}

int printNumero(int numeros[], int tam)
{
	int todoOk = -1;
	if (numeros != NULL)
	{
		printf("Contenido completo del vector:");

		for (int i = 0; i < tam; i++)
		{
			printf("%d", numeros[i]);
		}

		todoOk = 0;
	}
	return todoOk;
}

