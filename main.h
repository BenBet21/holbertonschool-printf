#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_character(va_list args);
int print_string(va_list args);
int print_percentage(va_list args);
int choix_options(const char option, va_list args);

typedef struct tableau_options_structure
{
	char option;
	int (*function)(va_list);
} tableau_options;

#endif
