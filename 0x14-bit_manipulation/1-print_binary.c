#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int binary;

	if (n >> 1)
		print_binary(n >> 1);
	/* get the last bit of the number */
	binary = n & 1;
	putchar(binary + '0');
}
