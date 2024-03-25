#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{

int index = 0;
int longeur = 0;

va_list args;
va_start(args, format);

	if (format == NULL || format[0] == '%' && format[1] == '\0')
	{
		return (-1);
	}
}

