#include "main.h"

/**
 * _printf - print a string, or char, or anything else in stdout
 * @format: string given by user
 * Return: outpout length
*/

int _printf(const char *format, ...)
{
	int count = 0;
	void (*func)(va_list, int*);
	va_list listOfArgs;

	va_start(listOfArgs, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			func = getPrintFunc(format);

			if (func)
				func(listOfArgs, &count);
			else
			{
				putCharAndCount('%', &count);
				putCharAndCount(*format, &count);
			}
		}
		else
			putCharAndCount(*format, &count);
		format++;
	}

	va_end(listOfArgs);
	return (count);
}
