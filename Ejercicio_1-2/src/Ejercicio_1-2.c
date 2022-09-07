/*
 Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
 Ejemplo:
 Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el segundo”

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

	int num1, num2, num3;

	printf("ingrese un numero: ");
	scanf("%d", &num1);
	printf("ingrese un numero: ");
	scanf("%d", &num2);
	printf("ingrese un numero: ");
	scanf("%d", &num3);

	if (num1 > num2 && num1 > num3)
	{
		printf("el mayor de los numeros es el primero");
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("el mayor de los numeros es el segundo");
	}
	else
	{
		printf("el mayor de los numeros es el tecero");
	}

	return EXIT_SUCCESS;
}
