#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/completed)
 */
int main(void)
{
	int num1, num2;
	num1 =0;
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar((num1);
			putchar((num2 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');
			if ((num1 == 00) && (num2 == 99))
				continue;
			putchar(',');
			putchar(' ');
		}
	
	putchar('\n');
	return (0);
}

