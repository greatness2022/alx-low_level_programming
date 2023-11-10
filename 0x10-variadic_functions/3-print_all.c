#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format string
 * @format: Format string containing types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char c;
	float f;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
				case 'i':
				printf("%d", va_arg(args, int));
				break;
				case 'f':
				printf("%f", va_arg(args, double));
				break;
				case 's':
				str = va_arg(args, char *);
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
				break;
				default:
				break;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
