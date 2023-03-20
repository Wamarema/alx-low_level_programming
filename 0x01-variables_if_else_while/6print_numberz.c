#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n = 0;

    while (n < 10)
    {
        putchar(n % 10 + '0');
        n++;
    }
    putchar('\n');
    return (0);
}
