#include "main.h"

/**
 * _isupper - checks if uppercase
 * @c: argument to the function
 * Return: 0 or 1 (Success)
 */
int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
			return (0);
}
