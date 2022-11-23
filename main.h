#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);

/**
 * struct func -  struct for specifier
 *  @t: character to compare
 *  @f: function to handle printing
 */

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int print_char(va_list);
int print_cent(va_list);
int print_str(va_list);

#endif
