/**
 * print_array - Print an array of integers with commas and a newline
 * @arr: The array of integers
 * @n: The number of elements in the array
 */
void print_array(const int *arr, int n)
{
	if (n <= 0)
	{
		return;
	}

	char buffer[20]; /* Assuming a reasonable size for the buffer*/
	int len;

	for (int i = 0; i < n; i++)
	{
		_itoa(arr[i], buffer, &len);
		write(1, buffer, len);

		if (i < n - 1)
		{
			char separator[] = {',', ' '};

			write(1, separator, 2);
		}
	}

	char newline = '\n';
	write(1, &newline, 1);
}
