#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - test file
 *
 * Return: always 0
 */
int main(void)
{
	int count_std = 0;
	int count_ctd = 0;

	write(1, "REGULAR\n", 8);
	count_std = printf("%s\n", "kofi");
	printf(" %d characters\n", count_std);

	write(1, "NEW_OUTPUT\n", 11);
	count_ctd = _printf("%s\n", "kofi");
	printf(" %d characters\n", count_ctd);

	return (0);
}
