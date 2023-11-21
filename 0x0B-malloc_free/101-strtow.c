#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strncat_modified - concatenates string with n bytes from another string
 * @dest: destination string
 * @src: source string
 * @i: index of beginning char from source string to copy
 * @str_len: string length
 * Return: next index to check of source string
 */
int strncat_modified(char *dest, char *src, int i, int str_len)
{
int j;

for (j = 0; src[i] != ' ' && i < str_len; i++, j++)
	dest[j] = src[i];
return (i);
}
/**
 * mallocmem - allocates memory for output array and sets NULL at string end
 * @newstr: new string
 * @str: input string
 * @str_len: string length
 * Return: void
 */
void mallocmem(char **newstr, char *str, int str_len)
{
int i = 0, j = 0, word_len = 1;

while (i < str_len)
{
if (str[i] != ' ')
{
while (str[i] != ' ' && i < str_len)
	i++, word_len++;
newstr[j] = malloc(sizeof(char) * word_len);
newstr[j][word_len] = '\0';
j++, word_len = 1;
}
i++;
}
}
/**
 * count_word - counts words in input string
 * @str: input string
 * @str_len: string length
 * Return: 0 on failure, words on success
 */

int count_word(char *str, int str_len)
{
int i = 0, words = 0;

while (i < str_len)
{
if (str[i] != ' ')
{
while (str[i] != ' ' && i < str_len)
	i++;
words++;
}
i++;
}
if (words == 0)
	return (0);
return (words);
}

/**
 * strtow - splits a string into words
 * @str: input string to split
 * Return: pointer to new string
 */
char **strtow(char *str)
{
char **newstr;
int i = 0, j = 0, str_len = 0, words;

if (str == NULL || str[0] == '\0')
	return (NULL);
while (*(str + str_len) != '\0')
	str_len++;
words = count_word(str, str_len);
if (!words)
	return (NULL);
newstr = malloc((words + 1) * sizeof(char *));
mallocmem(newstr, str, str_len);
while (i < str_len)
{
if (str[i] != ' ')
{
i = strncat_modified(newstr[j], str, i, str_len);
j++, i--;
}
i++;
}
newstr[words + 1] = NULL;
return (newstr);
}
