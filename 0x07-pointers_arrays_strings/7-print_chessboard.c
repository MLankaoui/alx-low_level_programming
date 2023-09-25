#include "main.h"

/**
* print_chessboard - Prints a chessboard.
* @a: 2D array representing the chessboard.
*/
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			putchar(a[row][col]);
			if (col < 7)
				putchar(' ');
		}
		putchar('\n');
	}
}
