#include "main.h"
#include <stddef.h> 

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    int x, y;

    for (x =0; s[x] != '\0'; x++)
    {
	    for (y=0; accept[y] != '\0'; y++)
	    {
		    if (s[x] == accept[y])
			    return (s + x);
	    }
    }
    return (NULL);
}
