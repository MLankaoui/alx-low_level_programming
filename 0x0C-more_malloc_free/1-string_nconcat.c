#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *tmp;


	if (strlen(s2) > n)
	{
		int i;
		i = 0;

		while (s1[i] != '\0' i < n)
		{
			s1[i] = s2[i];
		}
	}

	

	if (strlen(s2) < n)
	{
		int j;

		j = 0;

		while (s1[i] != '\0')
		{
			s1[j] = s2[j];
		}
	}
	tmp = malloc(strlen(s1));

	if (tmp == NULL)
	{
		return (NULL);
	}


	return (s1);
}