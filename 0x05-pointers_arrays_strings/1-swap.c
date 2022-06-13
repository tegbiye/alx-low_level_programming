#include "main.h"

/**
 * swap_int - a function that takes two pointers to an int as parameter
 * and swaps the values of the two integers
 * @a: input
 * @b: input
 * Return: none
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
