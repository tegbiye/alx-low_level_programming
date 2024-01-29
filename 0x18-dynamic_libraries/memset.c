#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - function that fills memory with constant byte
 * @s: points to memory area
 * @b: Constant byte
 * @n: the number of bytes
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}

