#include "main.h"
#include <stdio.h>

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  *
  * Return: empty
  */

void reverse_array(int *a, int n)
{
int *arr, i, cp, j;
arr = a;
for (i = 1; i < n; i++)
{
arr++;
}
for (j = 0; j < i / 2; j++)
{
cp = a[j];
a[j] = *arr;
*arr = cp;
arr = arr - 1;
}
}
