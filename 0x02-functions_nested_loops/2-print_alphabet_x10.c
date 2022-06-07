#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet x10
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char c;
char max;
for (max = 0; max <= 9; max++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
