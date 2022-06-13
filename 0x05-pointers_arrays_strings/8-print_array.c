#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n
 * elements of an array of elements, followed by a new line
 *
 * @a: input 
 * @n: length of array
 * Return: print n array of integers
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n - 1; i++)
{
printf("%d, ", a[i]);
if ( i == (n - 1))
{
printf("%d", a[n-1]);
}
}
printf("\n");
}
