#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */
char *cap_string(char *s1)
{
    int i = 1;

	while (s1[i] != '\0')
    {
        if (s1[i] >= 97 && s1[i] <= 122)
        {
            if (s1[i - 1] == ' ' || s1[i - 1] == '.' || s1[i-1] == '\n')
                s1[i] = s1[i] - 32;
            else if (s1[i - 1] == '\t')
                s1[i] = s1[i] - 32;
            
        }
        i++;
    }
    return (s1);
}
