#include "main.h"

/**
 * times_table - prints 9 times table, starting with 0
 *
 * Return: void.
 */
void times_table(void)
{
int i, j, prod;
for (i = 0; i <= 9; i++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (j = 1; j <= 9; j++)
{
prod = i * j;
if ((prod / 10) > 0)
{
_putchar((prod / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((prod % 10) + '0');
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
