#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - function that copies memory area
 * @dest: memory area destination
 * @src: memory area source
 * @n: the number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
