/*
 Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.

 Division: 1E / 1F
 Apellido: Cantos
 Nombre: Santiago Felipe
 Dni: 42.587.701

 Enunciado de germán: cargue 5 numeros, que muestre la sumatoria de los mismos, el promedio y la lista de numeros
 EXTRA: calcular cuantos numeros positivos se ingresaron.

 EXTRA 2:
 */

#include <stdio.h>
#include <stdlib.h>

void getNumeros(int numeros[], int tam);

int main(void)
{
	setbuf(stdout, NULL);

	int numeros[5];
	int suma = 0;
	float promedio;
	int positivos = 0;

	//pido numeros y los acumulo en mi vector[5]
	for (int i = 0; i < 5; i++)
	{
		printf("ingrese un numero: ");
		scanf("%d", &numeros[i]);
		suma += numeros[i];
	}

	//printeo los numeros que tengo en mi vector
	printf("sus numeros son: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", numeros[i]);

		//solo cuento los positivos
		if (numeros[i] > 0)
		{
			positivos++;
		}
	}

	promedio = (float) suma / 5;

	printf("la suma de los numeros es: %d\n", suma);
	printf("el promedio de los numeros es: %.2f\n", promedio);
	printf("la cantidad de positivos son: %d\n", positivos);

	return EXIT_SUCCESS;
}

void getNumeros(int numeros[], int tam)
{
	for (int i = 0; i < tam; i++)
	{
		printf("ingrese un numero: ");
		scanf("%d", &numeros[i]);
	}
}

