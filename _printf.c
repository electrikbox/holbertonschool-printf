#include "main.h"

/**
 * _printf - print a string, or char, or anything else in stdout
 * @format: string given by user
 * Return: outpout length
*/

int _printf(const char *format, ...)
{
	int count = 0, (*func)(va_list);
	va_list listOfArgs;

	va_start(listOfArgs, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			func = getPrintFunc(format);

			if (func)
				count += func(listOfArgs);
			else
			{
				if (*format == 'C' || *format == 'S' || *format == '\0')
				{
					va_end(listOfArgs);
					if (*format == '\0')
						return (0);
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
