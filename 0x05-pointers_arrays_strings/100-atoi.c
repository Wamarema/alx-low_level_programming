/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted.
 *
 * Return: the converted integer.
 */

int _atoi(char *s)
{
    int sign = 1, i = 0, result = 0;

    /* Determine the sign of the integer */
    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        if (s[i] >= '0' && s[i] <= '9')
            break;
        i++;
    }

    /* Compute the integer */
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
            result = result * 10 + s[i] - '0';
        else if (result > 0)
            break;
        i++;
    }

    return (result * sign);
}

