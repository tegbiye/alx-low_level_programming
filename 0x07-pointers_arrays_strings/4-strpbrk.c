#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: character s
 * @accept: bytes to be compared
 *
 * Return: a pointer to a byte in s that matches one of bytes in accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
char *len;
len = strpbrk(s, accept);
if (len == 0)
{
return (NULL);
}
return (len);
}
