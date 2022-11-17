#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_all - print char, integer, float and string
*@format: format
*/

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int m = 0, e, w = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[m])
	{
		e = 0;
		while (t_arg[e])
		{
			if (format[m] == t_arg[e] && w)
			{
				printf(", ");
				break;
			} e++;
		}
		switch (format[m])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), w = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), w = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), w = 1;
			break;
		case 's':
			str = va_arg(valist, char *), w = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} m++;
	}
	printf("\n"), va_end(valist);
}

