#include "main.h"
#include <stddef.h> 
/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *x1 = haystack; 
	char *x2 = needle; 

	while (*x1)
	{
		if (*x1 == *x2)
		{
			char *a = x1;

			while (*a && *x2 && *x2 == *a)
			{
				x2++;
				a++;
			}
			if (!*x2)
			{
				x1 = needle;
				return (x1);
			}
		}
		x1++;
	}
	return (NULL);
}
