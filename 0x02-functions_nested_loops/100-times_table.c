/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table to print
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j == 0)
				putchar('0');
			else if (result < 10)
				putchar(' '), putchar(' '), putchar(result + '0');
			else if (result < 100)
				putchar(' '), putchar(result / 10 + '0'), putchar(result % 10 + '0');
			else
				putchar(result / 100 + '0'), putchar(result % 100 / 10 + '0'), putchar(result % 10 + '0');

			if (j < n)
				putchar(','), putchar(' ');
			else
				putchar('\n');
		}
	}
}

