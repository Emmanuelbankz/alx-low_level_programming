#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always return 0
 */

int main(void)
{
	int a = 0;

	for (; 0 < 10 ; a++)
		putchar('0' + a);
	putchar('\n');
	return (0);
}
