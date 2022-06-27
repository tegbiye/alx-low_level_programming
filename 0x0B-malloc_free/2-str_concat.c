#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *@s1: char
 *@s2: char
 *
 * Return: NULL on failure or pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
char *pt;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

pt = malloc(((strlen(s1) + strlen(s2)) + 1) * sizeof(char));
if (pt == NULL)
	return (NULL);
strncat(pt, s1, strlen(s1));
strncat(pt, s2, strlen(s2));
pt += '\0';
return (pt);
}
