/*
 Ejercicio 2-3:
 Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas,
 de cada persona debemos obtener los siguientes datos:
 número de cliente,
 estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
 edad( solo mayores de edad, más de 17),
 temperatura corporal (validar por favor)
 y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
 NOTA: El precio por pasajero es de $600.
 Se debe informar (solo si corresponde):
 a) La cantidad de personas con estado "viudo" de más de 60 años.
 b) el número de cliente y edad de la mujer soltera más joven.
 c) cuánto sale el viaje total sin descuento.
 d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%,
 que solo mostramos si corresponde.
 *


 Division: 1E / 1F
 Apellido: Cantos
 Nombre: Santiago Felipe
 Dni: 42.587.701
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(void)
{
	setbuf(stdout, NULL);

	int personas = 0;
	char respuesta = 's';
	char estadoCivil;
	int edad;
	int tempCorporal;
	char genero;
	int precioPasajero = 600;
	int vMayor = 0;
	int numCliente;
	int numClienteJoven;
	int edadJoven;
	int totalSinDescuento = 0;
	int viejos = 0;
	int totalConDescuento;
	int descuento;

	while (respuesta == 's')
	{
		printf("Ingrese su numero de cliente: ");
		scanf("%d", &numCliente);

		printf("\nIngrese su estado civil (s/c/v): ");
		__fpurge(stdin);
		scanf("%c", &estadoCivil);
		while (estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v')
		{
			printf("\nError Ingrese su estado civil (s/c/v): ");
			__fpurge(stdin);
			scanf("%c", &estadoCivil);
		}

		printf("\nIngrese su edad: ");
		scanf("%d", &edad);
		while (edad < 18)
		{
			printf("\nError Ingrese su edad mayor a 17: ");
			scanf("%d", &edad);
		}

		printf("\nIngrese su temperatura corporal (34 a 42): ");
		scanf("%d", &tempCorporal);
		while (tempCorporal < 34 || tempCorporal > 42)
		{
			printf("\nError Ingrese su temperatura corporal (34 a 42): ");
			scanf("%d", &tempCorporal);
		}

		printf("\nIngrese su genero (f/m/o): ");
		__fpurge(stdin);
		scanf("%c", &genero);
		while (genero != 'f' && genero != 'm' && genero != 'o')
		{
			printf("\nError Ingrese su genero (f/m/o): ");
			__fpurge(stdin);
			scanf("%c", &genero);
		}

		if (estadoCivil == 'v' && edad > 60)
		{
			vMayor++;
		}

		if ((genero == 'f' && estadoCivil == 's') && edad < edadJoven)
		{
			edadJoven = edad;
			numClienteJoven = numCliente;
		}

		if (edad > 60)
		{
			viejos++;
		}
		personas++;

		printf("desea continuar? (s/n)");
		__fpurge(stdin);
		scanf("%c", &respuesta);
	}

	totalSinDescuento = personas * precioPasajero;

	printf("\nLa cantidad de personas viudo/a mayor a 60 años son: %d", vMayor);
	printf("\nLa mujer soltera mas joven tiene %d años y su n° Cliente es: %d",
			edadJoven, numClienteJoven);
	printf("\nEl viaje total sin descuento sale: %d", totalSinDescuento);
	if ((personas / 2) < viejos)
	{
		descuento = totalSinDescuento * 0.25;
		totalConDescuento = totalSinDescuento - descuento;
		printf(
				"\nAl ser mas viejos se le aplicará un descuento del 25 su nuevo total es: %d",
				totalConDescuento);
	}
	else
	{
		printf("\nNo son mas viejos que pasajeros");
	}

	return EXIT_SUCCESS;
}
