#include <stdio.h>
#include "main.h"
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
	char a;

	if (n == -2147483648)
	{
		print_number(n / 10);
		_putchar('8');
	}
	/*Check negatives*/
	else if (n < 0)
	{
		_putchar('-');
		print_number(n / (-1));
	}
	/*Main */
	else
	{
		if (n >= 10)
			print_number(n / 10);
		a = n % 10 + '0';
		_putchar(a);
	}
}
