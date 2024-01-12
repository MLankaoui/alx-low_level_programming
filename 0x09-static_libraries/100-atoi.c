/**
 * _atoi - Converts a string to an integer.
 * @s: The input string to be converted.
 *
 * Return: The integer value extracted from the string.
 */
int _atoi(char *s)
{
	/* Initialize variables */
	int nb;    /* Stores the final result. */
	int sign;  /* Keeps track of the sign. */

	nb = 0;    /* Initialize 'nb' to 0 (the initial result). */
	sign = 1;  /* Initialize 'sign' to 1 (positive sign). */

	/* Iterate through the input string 's' until the end is reached. */
	while (*s)
	{
		if (*s == '-')  /* Check if the current character is a minus sign. */
		{
			sign *= -1;  /* Toggle the sign by multiplying 'sign' by -1. */
		}
		else if (*s >= '0' && *s <= '9')  /* Check if the current character is a digit (0-9). */
		{
			/* Update 'nb' by multiplying the current value of 'nb' by 10 and adding the digit to it,
			 * considering the sign.
			 */
			nb = nb * 10 + sign * (*s - '0');
		}
		/* Check if 'nb' has already been assigned a non-zero value. */
		else if (nb != 0)  
		{
			/* Exit the loop to avoid further processing. */
			break;  
		}
		/* Move to the next character in the input string. */
		s++;  
	}

	/* Return the final integer result. */
	return (nb);
}
