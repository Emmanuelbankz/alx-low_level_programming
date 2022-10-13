#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int sum;

	sum = sum_all_the(10, 15, 20);
	printf("%d\n", sum);

	return (0);
}
