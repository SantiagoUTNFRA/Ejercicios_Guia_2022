/*
 Ejercicio 2-4:
 Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.


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

	char caracter;
	int letraP = 0;

	for (int i = 0; i < 4; i++)
	{
		printf("Ingrese un caracter: ");
		__fpurge(stdin);
		scanf("%c", &caracter);

		if (caracter == 'p')
		{
			letraP++;
		}
	}

	printf("se ingresaron: %d letras 'p'", letraP);

	return EXIT_SUCCESS;
}
