#include "main.h"

/**
 * rev_string - function that reverses a string
 * @a:the string to reverse
 *
 * Description:
 */
void rev_string(char *a)
{
	int start = 0;
	int end = 0;

	char temp;

	while (a[end] != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
	
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
