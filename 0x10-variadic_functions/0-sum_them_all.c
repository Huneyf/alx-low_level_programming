#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all- is a function that adds up any number of functions.
 * @n: any Number of intigers
 * Returns: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	va_start (ap, n);
	int i, sum = 0;
	if (n == 0)
	{
		return 0;
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg (ap, int);
	}
	va_end (ap);
	return (sum);
}
