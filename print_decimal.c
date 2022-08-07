#include "main.h"

/**
 * print_decimal - prints digits in deciaml fomart
 * @value: integer given
 * Return: sum of interger
 */
int print_decimal(long int value)
{
	int sum = 0;

	if (value < 0)
	{
		sum += _putchar('-');
		value = value * -1;
	}
	if (value / 10)
		sum += print_decimal(value / 10);
	sum += _putchar(value % 10 + '0');
	return (sum);
}
