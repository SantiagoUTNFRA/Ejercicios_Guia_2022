#include <stdio.h>
#include <stdlib.h>
#include "converter.h"

int menu()
{
	int opcion;

	system("cls");
	printf("\n");
	printf("1). Ingresar temperatura en °C\n");
	printf("2). Ingresar temperatura en °F\n");
	printf("3). Convertir a Celcius\n");
	printf("4). Convertir a Fahrenheit\n");

	printf("\n\nIngrese opcion: ");
	scanf("%d", &opcion);

	return opcion;
}

int getCelcius(float *temperatura)
{
	int todoOk = 0;

	if (temperatura != NULL)
	{
		printf("Ingrese su temperatura en grados celcius: ");
		scanf("%f", temperatura);

		todoOk = 1;
	}

	return todoOk;
}

int getFahrenheit(float *temperatura)
{
	int todoOk = 0;

	if (temperatura != NULL)
	{
		printf("Ingrese su temperatura en grados fahrenheit: ");
		scanf("%f", temperatura);

		todoOk = 1;
	}

	return todoOk;
}

int celciusA_Fahrenheit(float *temperatura)
{
	int todoOk = 0;

	if (temperatura != NULL)
	{
		*temperatura = *temperatura * 1.8 + 32;
		printf("su temperatura ahora es %2.f°F\n", *temperatura);
		system("pause");
		todoOk = 1;
	}

	return todoOk;
}

int fahrenheitA_Celcius(float *temperatura)
{
	int todoOk = 0;

	if (temperatura != NULL)
	{
		*temperatura = (*temperatura - 32) / 1.8;
		printf("su temperatura ahora es %2.f°C\n", *temperatura);
		system("pause");
		todoOk = 1;
	}

	return todoOk;
}
