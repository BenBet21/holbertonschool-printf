#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - Prints formatted output to stdout
 * @format: A string containing zero or more format specifiers
 *
 * Description: This function prints formatted output to the standard output
 * stream (stdout), according to a format string. The format string may
 * contain format specifiers starting with '%' character, which are replaced
 * by the values specified in the variadic arguments list.
 *
 * Return: The number of characters printed (excluding the null byte used to
 * end the output to strings).
 */



int _printf(const char *format, ...)
{
	int index = 0;
	int longueur = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			longueur = longueur + choix_options(format[index + 1], args);
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
