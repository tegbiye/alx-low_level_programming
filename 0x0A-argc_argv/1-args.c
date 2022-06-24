#include <stdio.h>

/**
 * main - prints number of arguments passed
 *@argc: int.
 *@argv: char.
 *
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
