#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search in
 * @c: character to look for
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *c_occur = NULL;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			c_occur = &s[i];
			break;
		}
	}
	return (c_occur);
}
