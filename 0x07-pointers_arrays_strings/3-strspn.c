#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * consisting of only bytes from a set of accepted bytes
 *
 * @s: Pointer to the string to be scanned
 * @accept: Pointer to the string containing the set of accepted bytes
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int i, j, len = 0;

        for (i = 0; s[i]; i++)
        {
                for (j = 0; accept[j]; j++)
                {
                        if (s[i] == accept[j])
                        {
                                len++;
                                break;
                        }
                }
                if (!accept[j])
                        break;
        }

        return (len);
}

