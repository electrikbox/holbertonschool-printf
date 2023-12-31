#include "main.h"

/**
 * getPrintFunc - select the right function depending on given char *
 * @str: given char *
 * Return: selected function
*/
int (*getPrintFunc(const char *str))(va_list)
{
	helpconversion_t formatStructure[] = {
		{'c', printCharacter},
		{'s', printString},
		{'%', printPercent},
		{'d', printNumbers},
		{'i', printNumbers},
		{'\0', NULL}
	};

	int i = 0;

	while (formatStructure[i].format != '\0')
	{
		if (*str == formatStructure[i].format)
			return (formatStructure[i].function);
		i++;
	}

	return (NULL);
}
