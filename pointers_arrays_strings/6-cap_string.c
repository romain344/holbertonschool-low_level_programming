#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: The modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (capitalize)
			{
				str[i] = str[i] - 'a' + 'a';
				capitalize = 0;
			}
		}
		else
		{

				if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
			{
				capitalize = 1;
			}
		}

		if (str[i] >= 'A' && str[i] <= 'Z')
		{

			if (!capitalize)
			{
				str[i] = str[i] + 'a' - 'A';
			}
		}

		i++;
	}

	return (str);
}
