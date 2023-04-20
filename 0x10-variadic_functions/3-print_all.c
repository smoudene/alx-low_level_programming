#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *sep = "";
	va_list l;

	va_start(l, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(l, double));
					break;
				case 's':
					str = va_arg(l, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(l);
}
