#include <stdlib.h>
#include <stdio.h>
#include <udis86.h>


/**
 * main - prints the opcodes of its own function
 * @argc: int
 * @argv: char
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
ud_t obj;
int i = 0, j = 0;
if (argc == 2)
{
i = atoi(argv[1]);
if (i < 0)
	printf("Error\n");
	exit(2);
ud_unit(&obj);
ud_set_input_buffer(&obj, argv[1], i);
ud_set_mode(&obj, 64);
ud_set_syntax(&obj, UD_SYN_INTEL);

while (ud_disassemble(&obj))
	printf("\t%s\n", ud_insn_hex(&obj));
}
return (0);
}
