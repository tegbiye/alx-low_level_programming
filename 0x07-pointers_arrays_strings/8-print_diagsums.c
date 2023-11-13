#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - a function that prints the sum of
 * two diagonals of square matrix of integers
 * @a: square matrix
 * @size: the matrix size
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[(size + 1) * i];
sum2 += a[(size - 1) * (i + 1)];
}
printf("%d, %d\n", sum1, sum2);
}
