#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: pointer of pointer to char
 * @to: pointer to a char
 *
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
*s = to;
}
