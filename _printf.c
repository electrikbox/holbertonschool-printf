#include "main.h"

/**
 * _printf - print a string, or char, or anything else in stdout
 * @format: string given by user
 * Return: outpout length
*/

int _printf(const char *format, ...)
{
	int count = 0;
	int (*func)(va_list);
	va_list listOfArgs;

	va_start(listOfArgs, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			func = getPrintFunc(format);

			if (func)
			{
				count += func(listOfArgs);
			}
			else
			{
				if (*format == 'C' || *format == 'S')
				{
					va_end(listOfArgs);
					return (-1);
				}

				_putchar('%');
				_putchar(*format);
				count += 2;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(listOfArgs);
	return (count);
}
