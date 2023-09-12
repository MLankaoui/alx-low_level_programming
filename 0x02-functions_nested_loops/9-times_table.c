#include <stdio.h>
#include <stdlib.h>

/*
 * times_table - Prints a times table
 */
void times_table(void);

int main(void)
{
    times_table();
    return (0);
}

void times_table(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (j == 0) // Don't print ',' before the first number
            {
                putchar('0' + i * j); // Calculate and print the product
            }
            else
            {
                putchar(',');
                putchar(' ');
                int product = i * j;
                if (product < 10) // Add an extra space for single-digit products
                {
                    putchar(' '); // Extra space for alignment
                }
                printf("%2d", product); // Print the product with two digits
            }
        }
        putchar('\n');
    }
}
