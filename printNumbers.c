#include "main.h"
#include <ctype.h>
#include <limits.h>

/**
 * printNumbers - print Numbers
 * @args: list of arguments
 * @count: argument for count
 */

int printNumbers(va_list args)
{
	int i, temp, digit;
	int divide = 1;
	int num = va_arg(args, int);
	int len1 = 0, len2 = 0;

	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		num = 147483648;
		len2 = 2;
	}

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		len2 = 1;
	}

	/* get n lenght */
	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		len1++;
	}

	/* get higher diviser factor to get all digit: '/ 1000' '/ 100' etc */
	divide = 1;
	for (i = 1; i < len1; i++)
	{
		divide *= 10;
	}

	/* print digit, divide factor per 10 to have the next digit at next loop */
	while (divide != 0)
	{
		digit = num / divide;
		num %= divide;
		divide /= 10;
		_putchar(digit + '0');
	}
	return (len1 + len2);
}

