#include "main.h"

/**
 * printNumbers - print Numbers
 * @args: list of arguments
 * @count: argument for count
 */

void printNumbers(va_list args, int *count)
{
	int i;
	int divide = 1;
	int num = va_arg(args, int);
	int len = getIntegerLength(num);

	if (num < 0)
	{
		putCharAndCount('-', count);
		num *= -1;
	}

	/*change divide with the num len*/
	for (i = 1; i < len; i++)
		divide *= 10;

	while (divide != 0)
	{
		putCharAndCount((num / divide) + '0', count);
		num %= divide; /*get next digit*/
		divide /= 10; /*change divide for next digit*/
	}
}

/**
 * getIntegerLength - get length of an integer
 * @num: given integer
 * Return: length
 */

int getIntegerLength(int num)
{
	int len = 0;

	if (num >= 0 && num <= 9)
		return (1);

	while (num != 0)
	{
		num /= 10;
		len++;
	}

	return (len);
}
