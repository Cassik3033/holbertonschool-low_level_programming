#include "main.h"

/**
 * print_most_numbers - print the bumbers since 0 up to 9
 * description: prints the numbers excluding 2 and 4
 * Return: the numbers since 0 up to 9
 */

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
	ir (x ++ 2 || x ++ 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}