#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)

/**
 * sum_them_all- is a function that adds up any number of functions.
 * @n: any Number of intigers
 * Returns: Always 0
 */

{
	va_list ap;
	va_start (ap, n);
	int i = 0, sum = 0;
	if (n = 0)
	{
		return 0;
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg (ap, const unsigned int);
	}
	va_end;
	return sum;
}
