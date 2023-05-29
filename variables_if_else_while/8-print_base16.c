#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints
 * Return: Always (Success)
 */

int main(void)
{
	int b;
	char c;

	for (b = '0'; b <= '9'; b++)
		putchar(b);

	for (c = 'a' ; c <= 'f'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
