#include "main.h"

/**
 * string_toupper -
 * @str:
 *
 * return:
 */
char *string_toupper(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str [i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}

	return str;
}
