#include "main.h"

int print_character(va_list args)
{
	char c = va_arg(args, int);
	return (_putchar(c));
}

int print_string(va_list arguments)
{
	char *string = va_arg(arguments, char *);
	char *null = "(null)";
	int longueur = 0;

	if (string == NULL)
	{
		/* print "(null)" and return the number of characters printed (6) */
		return (write(1, null, 6));
	}

	while (*string != '\0')
	{
		_putchar(*string);
		string++;

		longueur++;
	}

	return (longueur);
}

int print_percentage(va_list args)
{
	/* silence the unused parameter warning */
	(void)args;
	_putchar('%');
	return (1);
}
