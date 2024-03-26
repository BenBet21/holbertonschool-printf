#include "main.h"

int choix_options(const char option, va_list args)
{
	int index_liste = 0;

	tableau_options liste[] = {
		{'c', print_character},
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
