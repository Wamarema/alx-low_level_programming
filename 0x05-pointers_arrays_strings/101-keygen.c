#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define PASSWORD_LENGTH 65

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char password[PASSWORD_LENGTH];
    int i, rand_num;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH - 1; i++)
    {
        rand_num = rand() % 62;

        if (rand_num < 26)
            password[i] = 'A' + rand_num;
        else if (rand_num < 52)
            password[i] = 'a' + rand_num - 26;
        else
            password[i] = '0' + rand_num - 52;
    }

    password[PASSWORD_LENGTH - 1] = '\0';

    printf("%s", password);

    return (0);
}
