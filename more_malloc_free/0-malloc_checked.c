#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_cheked - allocates memory
 * @b: the size to allocate
 * return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
