#ifndef PRINTF
#define PRINTF

/* adding libraries */
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

/* prototypes for _putchar functions */
int _putchar(char c);

/* prototype for the main printf function */
int _printf(const char *format, ...);

/* prototypes for printf functions */
int print_character(va_list args);
int print_string(va_list args);
int print_percentage(va_list args);

/* prototype for the function options */
int choix_options(const char option, va_list args);

typedef struct tableau_options_struncture
{
	char option;
	int (*function)(va_list);
} tableau_options;

#endif
