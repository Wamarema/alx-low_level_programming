#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: The integer whose absolute value to compute
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
    int abs_n = n < 0 ? -n : n;

    if (n < 0)
        putchar('-');

    if (abs_n / 10)
        _abs(abs_n / 10);

    putchar(abs_n % 10 + '0');

    return abs_n;
}
