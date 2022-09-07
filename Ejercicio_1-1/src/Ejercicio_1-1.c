/*
 Ingresar dos números enteros, sumarlos y mostrar el resultado.
 Ejemplo:
 Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2 da como resultado 5”

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

	int num1;
	int num2;
	int resultado;

	printf("ingrese el primer numero: ");
	scanf("%d", &num1);

	printf("ingrese el segundo numero: ");
	scanf("%d", &num2);

	resultado = num1 + num2;

	printf("su resultado es: %d", resultado);

	return EXIT_SUCCESS;
}
