/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @s: the string to convert
 *
 * Return: a pointer to the resulting string
 */
char *string_toupper(char *s)
{
    char *p = s;

    /* Loop through the string */
    while (*p != '\0')
    {
        /* If the current character is lowercase, convert it to uppercase */
        if (*p >= 'a' && *p <= 'z')
        {
            *p -= 32;
        }
        p++;
    }

    return s;
}

