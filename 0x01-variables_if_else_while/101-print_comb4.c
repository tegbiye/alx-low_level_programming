#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
int d;
int e;
for (c = '0'; c <= '9'; c++)
{
for (d = '0'; d <= '9'; d++)
{
for (e = '0'; e <= '9'; e++)
{
if (c < d && d < e)
{
putchar(c);
putchar(d);
putchar(e);
if (c != '7' || (c == '7' && d == '8' && e != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
