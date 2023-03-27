#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
    int count = 0;
    while (*(str + count) != '\0')
    {
        count++;
    }
    count--;
    while (count >= 0)
    {
        putchar(*(str + count));
        count--;
    }
    printf("\n");
}
