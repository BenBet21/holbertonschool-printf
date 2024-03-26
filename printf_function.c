#include "main.h"

int print_percentage(va_list args)
{
	/* silence the unused parameter warning */
	(void)args;
	_putchar('%');
	return (1);
}

int print_character(va_list args)
{
	char c = va_arg(args, int);
	return (_putchar(c));
}
