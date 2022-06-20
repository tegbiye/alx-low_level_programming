#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - function that locates a chaacter in a string
 * @s: chracter s
 * @c: searched item c
 *
 * Return: a pointer to the first occurrence of character c in string s or NULL
 */

char *_strchr(char *s, char c)
{
char *ret;
ret = strchr(s, c);
return (ret);
}
