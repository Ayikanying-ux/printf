#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	n = _printf("Hello %c %s %%", 'H', "ALL");
	printf("\n%d\n", n);
	return (0);
}
