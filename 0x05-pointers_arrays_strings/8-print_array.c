#include "main.h"

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

    char buffer[20]; // Assuming a reasonable size for the buffer
    int len;
    int isNegative;

    for (int i = 0; i < n; i++)
    {
        isNegative = 0;
        len = 0;

        if (arr[i] == 0)
        {
            buffer[len++] = '0';
        }
        else
        {
            if (arr[i] < 0)
            {
                isNegative = 1;
                arr[i] = -arr[i];
            }

            while (arr[i] > 0)
            {
                int digit = arr[i] % 10;
                buffer[len++] = '0' + digit;
                arr[i] /= 10;
            }
            if (isNegative)
            {
                buffer[len++] = '-';
            }

            // Reverse the digits in the buffer to get the correct order
            for (int j = 0, k = len - 1; j < k; j++, k--)
            {
                char temp = buffer[j];
                buffer[j] = buffer[k];
                buffer[k] = temp;
            }
        }

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
