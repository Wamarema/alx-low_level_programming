/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
    int i, j, tmp;

    /* Swap elements from both ends of the array until the middle is reached */
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
}

