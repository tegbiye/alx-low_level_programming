#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string,
 * in reverse followed by a new line
 * @s: input character
 *
 * Return: None
 */

void print_rev(char *s)
{
int c = 0;
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
c++;
}
for (j = c - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');

}
