#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the chracter c to stdout
 * @c: the character to print
 * return: on success 1
 * on error, -1 is retruned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
