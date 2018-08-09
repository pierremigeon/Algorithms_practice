// Pierre Migeon July 2018
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int	pm_stringlen(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	pm_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (2);
		i++;
	}
	return (0);
}

char **pm_returnsubset(char **A, int low, int up)
{
	char **copy;
	int i;
	int j;

	j = 0;	
	copy = malloc((2 + up - low) * sizeof(*copy));
	for (i = low; i <= up; i++)
	{
		int length = strlen(A[i]) + 1;
		copy[j] = malloc(length);
		memcpy(copy[j++], A[i], length);
	}
	copy[j] = NULL;
	return (copy);
}

void	pm_merge(char **A, int p, int q, int r)
{
	char **left;
	char **right;
	int i, j, k;
	j = k = 0;
	i = p;

	left = pm_returnsubset(A, p, q);
	right = pm_returnsubset(A, q + 1, r); 
	while (left[j] && right[k])
	{
		if (pm_strcmp(left[j], right[k]) == 1)
			A[i++] = right[k++];
		else 
			A[i++] = left[j++];

	}
	while (left[j])
		A[i++] = left[j++];
	while (right[k])
		A[i++] = right[k++];
	free(left);
	free(right);
}

void	pm_mergesort(char **A, int p, int r)
{
	int q;
	if (p < r)
	{
		q = (p + r) / 2;
		pm_mergesort(A, p, q);
		pm_mergesort(A, q + 1, r);
		pm_merge(A, p, q, r);
	}
}

int	main(int argc, char **argv)
{
	int i;
	
	i = 1;
	pm_mergesort(argv, 1, argc - 1);
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
