#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int len = sizeof(str) - 1;
    ssize_t bytes_written = write(STDERR_FILENO, str, len);

    return (bytes_written != len);
}
