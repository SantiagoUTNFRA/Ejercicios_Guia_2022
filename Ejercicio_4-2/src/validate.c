#include <stdio.h>
#include <stdlib.h>
#include "validate.h"

int validateCelcius(float *temperatura)
{
	int todoOk = 0;

	if (temperatura != NULL)
	{
		if (*temperatura >= 0 && *temperatura <= 100)
		{
			todoOk = 1;
		}
		else
		{
			printf ("Por favor la proxima vez ingrese una temperatura valida!");
		}
	}

	return todoOk;
}

int validateFahrenheit(float *temperatura)
{
	int todoOk = 0;

	if (temperatura != NULL)
	{
		if (*temperatura >= 32 && *temperatura <= 212)
		{
			todoOk = 1;
		}
	}

	return todoOk;
}
