#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{

	register unsigned int i;
	int sum = 0;
	va_list arguments;

	va_start(arments, n);
	for (i = 0; i < n; i++)
		sum += va_arga(arments, int);
	va_end(arguments);
	return (sum);
}
