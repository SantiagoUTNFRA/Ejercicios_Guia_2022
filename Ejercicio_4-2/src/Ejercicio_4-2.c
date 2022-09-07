/*
 Ejercicio 4-2:
 Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit
 validando que las temperaturas ingresadas estén entre el punto de congelación y ebullición del agua para cada tipo de escala.
 Las validaciones se hacen en una biblioteca.
 Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.
 Extra:

 Division: 1E / 1F
 Apellido: Cantos
 Nombre: Santiago Felipe
 Dni: 42.587.701
 */

#include <stdio.h>
#include <stdlib.h>
#include "validate.h"
#include "converter.h"

int main(void)
{
	setbuf (stdout , NULL);

	float gradosCelcius;
	float gradosFahrenheit;
	char stay = 's';

	do
	{
		switch (menu ())
		{
		case 1:
			getCelcius (&gradosCelcius);
			validateCelcius (&gradosCelcius);
			break;
		case 2:
			getFahrenheit (&gradosFahrenheit);
			validateFahrenheit (&gradosFahrenheit);
			break;
		case 3:
			fahrenheitA_Celcius (&gradosFahrenheit);
			break;
		case 4:
			celciusA_Fahrenheit (&gradosCelcius);
			break;
		default:
			printf ("No existe esta opcion");
			break;
		}
	} while (stay == 's');

	return EXIT_SUCCESS;
}
