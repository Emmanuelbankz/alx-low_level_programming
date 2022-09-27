#include "main.h"
#include "2-strlen.c"

/**
 * pint_rev - reverse a string
 *
 * @: string to print
 */

void print_rev(char *s)
{
	int i;

	for (i = _strng(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
