#include "main.h"

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
	int test =1;
	int j;
	char *p;

	while (*haystack)
	{
		p = haystack;
		for (j = 0; needle[j] != '\0' && *haystack != '\0'; j++)
		{
			if (*haystack == needle[j])
			{
			 test = 0;
			 haystack++;
			}
			else
			{
				test = 1;
			break;
			}
	         
		}
	if (test == 0)
	break;
	haystack++;
	}
	if (test)
		p = '\0'
	return (p);
}
