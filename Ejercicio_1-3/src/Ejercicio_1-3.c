/*
 Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no exista también informarlo.
 Ejemplo:
 1   5   3     el 3 es del medio
 5   1   5    no hay numero del medio
 3  5   1     el 3 es del medio
 3   1   5    el 3 es del medio
 5   3   1    el 3 es del medio


 Division: 1E / 1F
 Apellido: Cantos
 Nombre: Santiago Felipe
 Dni: 42.587.701
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout, NULL);

	float numeroUno;
	float numeroDos;
	float numeroTres;

	float numMedio;

	printf("Ingresar un número: ");
	scanf("%f", &numeroUno);

	printf("Ingresar un segundo número: ");
	scanf("%f", &numeroDos);

	printf("Ingresar un tercer número: ");
	scanf("%f", &numeroTres);

	if ((numeroUno > numeroDos && numeroUno < numeroTres)
			|| (numeroUno < numeroDos && numeroUno > numeroTres))
	{
		numMedio = numeroUno;
		printf(
				"Número 1: %.2f, Número 2: %.2f Número 3: %.2f\n\nEl del medio es: %.2f ",
				numeroUno, numeroDos, numeroTres, numMedio);
	}
	else if ((numeroDos > numeroUno && numeroDos < numeroTres)
			|| (numeroDos < numeroUno && numeroDos > numeroTres))
	{
		numMedio = numeroDos;
		printf(
				"Número 1: %.2f, Número 2: %.2f Número 3: %.2f\n\nEl del medio es: %.2f",
				numeroUno, numeroDos, numeroTres, numMedio);
	}
	else if ((numeroTres > numeroUno && numeroTres < numeroDos)
			|| (numeroTres < numeroUno && numeroTres > numeroDos))
	{
		numMedio = numeroTres;
		printf(
				"Número 1: %.2f, Número 2: %.2f Número 3: %.2f\n\nEl del medio es:  %.2f",
				numeroUno, numeroDos, numeroTres, numMedio);
	}
	else
	{
		printf("\nno hay número del medio");
	}

	return EXIT_SUCCESS;
}
