#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: character haystack
 * @needle: substring to be searched on haystack
 *
 * Return: a pointer to the beginning of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
char *hay;
hay = strstr(haystack, needle);
if (hay == 0)
{
return (NULL);
}
return (hay);
}
