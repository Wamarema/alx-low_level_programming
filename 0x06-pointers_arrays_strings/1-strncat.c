/**
 * _strncat - concatenates two strings, up to n bytes of src
 * @dest: string to be concatenated with 'src'
 * @src: string to be concatenated with 'dest'
 * @n: maximum number of bytes to be used from 'src'
 *
 * Return: Pointer to the resulting string 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    /* Find the end of the 'dest' string */
    for (i = 0; dest[i] != '\0'; i++)
    {
        /* Do nothing */
    }

    /* Append the 'src' string to the end of 'dest', up to 'n' bytes */
    for (j = 0; src[j] != '\0' && j < n; j++)
    {
        dest[i + j] = src[j];
    }

    /* Add a null terminator to the end of the resulting string */
    dest[i + j] = '\0';

    /* Return a pointer to the resulting string 'dest' */
    return (dest);
}

