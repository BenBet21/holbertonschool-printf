#include "main.h"

int _printf(const char *format, ...)
{
	int index = 0;
	int longueur = 0;

	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{	
			longueur =  longueur + choix_options(format[index + 1], args);
			index = index + 2;
		}
		else
		{
			longueur = longueur + _putchar(format[index]);
			index++;
		}
	}
	va_end(args);
	return (longueur);
}
