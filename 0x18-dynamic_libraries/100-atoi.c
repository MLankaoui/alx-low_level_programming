/**
 * _atoi - Converts a string to an integer.
 * @s: The input string to be converted.
 *
 * Return: The integer value extracted from the string.
 */
int _atoi(char *s)
{

	int nb;
	int sign;

	nb = 0;
	sign = 1;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		/* Check if the current character is a digit (0-9). */
		else if (*s >= '0' && *s <= '9')
		{
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
