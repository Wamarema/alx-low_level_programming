/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Return: a pointer to the resulting string
 */
char *cap_string(char *s)
{
    char *p = s;
    int capitalize_next = 1;

    /* Loop through the string */
    while (*p != '\0')
    {
        /* If the current character is a separator, mark the next character to be capitalized */
        if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' || *p == ';' ||
            *p == '.' || *p == '!' || *p == '?' || *p == '"' || *p == '(' ||
            *p == ')' || *p == '{' || *p == '}')
        {
            capitalize_next = 1;
        }
        /* If the current character is a lowercase letter and the next character should be capitalized, convert it to uppercase */
        else if (capitalize_next && *p >= 'a' && *p <= 'z')
        {
            *p -= 32;
            capitalize_next = 0;
        }
        else
        {
            capitalize_next = 0;
        }
        p++;
    }

    return s;
}

