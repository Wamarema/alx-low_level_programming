#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: Pointer to the string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
    int len = 0, i;
    char temp;

    /* Calculate the length of the string */
    while (*(s + len) != '\0')
        len++;

    /* Swap characters from beginning to middle */
    for (i = 0; i < len / 2; i++)
    {
        temp = *(s + i);
        *(s + i) = *(s + len - i - 1);
        *(s + len - i - 1) = temp;
    }
}

