#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
 *  _printf - prints characters
 *  @format: string
 *  @...: variadic function
 *  Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	int value = 0;
	va_list args;
	int (*f)(va_list);

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count = count + value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count = count + value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
			{
				break;
			}
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i], 1);
				count = count + value;
				i = i + 2;
				continue;
			}
		}
	} return (count);
}
