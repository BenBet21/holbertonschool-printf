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
		return (write(1, (null), 6));
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


/**
 * print_integer - Print an integer from a variadic argument list
 * @args: The va_list containing the integer to print
 * * Return: The number of characters printed
 */

int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int temp = 0;
	int nbdivi = 1;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	temp = num;

	while (temp / 10 != 0)
	{
		nbdivi *= 10;
		temp /= 10;
	}

	temp = num;

	while (nbdivi != 0)
	{
		_putchar(temp / nbdivi + '0');
		temp %= nbdivi;
		nbdivi /= 10;
	}

	return (0);
}
