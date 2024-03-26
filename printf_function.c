#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_character - Prints a character.
 * @args: The va_list containing the character to be printed.
 * Return: Always returns 1, indicating success.
 */

int print_character(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}


/**
 * print_string - Prints a string.
 * @args: The va_list containing the string to be printed.
 * Return: The number of characters printed (excluding the null byte).
 */

int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	char *null = "(null)";
	int longueur = 0;

	if (s == NULL)
	{
		return (write(1, null, 6));
	}
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		longueur++;
	}
	return (longueur);
}


/**
 * print_percentage - Prints a percentage character
 * @args: A va_list containing arguments
 * Return: Always returns 1, indicating success.
 */

int print_percentage(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
