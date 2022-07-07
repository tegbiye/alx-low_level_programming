#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list vlist;
unsigned int i, sum = 0;
if (n == 0)
	return (0);
va_start(vlist, n);
for (i = 0; i < n; i++)
	sum += va_arg(vlist, const unsigned int);

va_end(vlist);

return (sum);

}
