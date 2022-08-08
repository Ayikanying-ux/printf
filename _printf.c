#include "main.h"
#include <stdarg.h>
#include <string.h>

int run_print(const char *format, ...)
{
	int sum = 0;
	
	va_list ap;
	
	va_start(ap, format)
	switch (format[i + 1])
		{
			case 'c':
				sum += _putchar(va_arg(args, int));
				break;
			case 's':
				sum += print_string(va_arg(args, char*));
				break;
			case '%':
				sum += _putchar('%');
				break;
			case 'd':
				sum += print_decimal(va_arg(args, int));
				break;
			case 'i':
				sum += print_decimal(va_arg(args, int));
				break;
			case 'b':
				sum += print_binary(va_arg(args, int));
				breakiii;
			default:
				break;
		}
	va_end(ap);
	return (sum);
}
/**
 * _printf - produces output according to a format
 * @format: format to produce
 * Return: sum
 */
int _printf(const char *format, ...)
{
	int sum = 0, i;

	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0';)
	{
		if (format[i] != '%')
		{
			sum += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			sum += run_print(const char *format, ..)
			i += 2;
		}
	}
	va_end(args);
	return (sum);
}
