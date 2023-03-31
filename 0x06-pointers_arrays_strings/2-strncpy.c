/**
 * _strncpy - copies 'n' characters from 'src' to 'dest'
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of characters to be copied from 'src'
 *
 * Return: pointer to the resulting string 'dest'
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i;

    /* Copy the characters from 'src' to 'dest', up to 'n' bytes */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* Fill the remaining bytes of 'dest' with null characters */
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    /* Return a pointer to the resulting string 'dest' */
    return (dest);
}

