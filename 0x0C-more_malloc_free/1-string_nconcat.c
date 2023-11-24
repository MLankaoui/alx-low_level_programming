#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i,j;
	char *tmp;
	i = 0;
	j = 0;

	if (strlen(s2) > n)
	{	

		while (s1[i] != '\0' && i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}

	

	if (strlen(s2) < n)
	{
		while (s1[i] != '\0')
		{
			s1[j] = s2[j];
			j++;
		}
	}
	tmp = malloc(strlen(s1) + 1);

	if (tmp == NULL)
	{
		return (NULL);
	}

	strcpy(tmp, s1);
	return (tmp);
}