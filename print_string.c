#include "main.h"

/**
 * print_string - outputs string to standard output
 * @ch: string passed to the function
 * Return: length of string
 */
int print_string(char *ch)
{
	int i, count = 0;

	while (*ch != '\0')
	{
		count += _putchar(*ch);
		ch++;
	}
	return (count);
}
