#include "main.h"
#include <string.h>
/**
 * puts_half - a function that prints half a string,
 * followed by a new line
 *
 * @str: input
 * Return: print half of string
 */

void puts_half(char *str)
{
int i, n;
int c = 0;
for (i = 0; str[i] != '\0'; i++)
{
c++;
}
n = (c / 2);

if ((c % 2) == 1)
{
n = ((c + 1) / 2);
}
for (i = n; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

