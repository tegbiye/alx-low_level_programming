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
unsigned int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i >= (strlen(str) / 2))
{
_putchar(str[i]);
}
}
_putchar('\n');
}

