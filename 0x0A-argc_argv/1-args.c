#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc >= 1 )
		printf("%d\n", argc - 1 );
	else
		printf("0\n");
	return (0);
}
