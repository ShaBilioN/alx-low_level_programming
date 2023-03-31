#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int i = 0,count;
	char sep_op[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (*(s + i) >= 97 && *(s + i) <= 122)
		*(s + i) = *(s + i) - 32;
	i++;
	while (*(s + i) != '\0')
	{
		for (count = 0; count < 13; count++)
		{
			if (*(s + i) == sep_op[count])
			{
				if(*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
					*(s + i + 1) = *(s + i + 1) - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
