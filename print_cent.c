#include "main.h"
/**
 * print_cent - prints characters & to the standard output
 * @args: variadic function
 * Return: returns num of characters printed
 */
int print_cent(va_list args)
{
	(void)args;

	write(1, "%", 1);

	return (1);
}
