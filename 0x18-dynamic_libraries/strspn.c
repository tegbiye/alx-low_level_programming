#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: character s
 * @accept: bytes to be substringed
 *
 * Return: a number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
int len;
len = strspn(s, accept);
return (len);
}
