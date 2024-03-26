#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * choix_options - Selects the appropriate option
 * based on the given option character.
 * @option: The option character indicating the desired action.
 * @args: The va_list containing the arguments needed for the selected option.
 * Return: THe result of the selected option.
 */


int choix_options(const char option, va_list args)
{
	int index_liste = 0;

	tableau_options liste[] = {
		{'c', print_character},
		{'s', print_string},
		{'%', print_percentage},
		{'\0', NULL}
	};

	while (liste[index_liste].option != '\0')
	{
		if (option == liste[index_liste].option)
		{
			return (liste[index_liste].function(args));
		}

		index_liste++;
	}
		_putchar('%');
		_putchar(option);
		return (2);
}

