#include <stdio.h>

/**
 *main - prints the size of various types based on the computer it is compiled
 * Return: Always 0
 */

int main(void)

{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of a int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("size of a float %zu bytes(s)\n", sizeof(float));
       return (0);
}       
