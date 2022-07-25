#include "header.h"

void	print_natrix(char **mat)
{
	int		i;
	int		j;

	i = 0;
	while (*mat[i] == '\0')
	{
		j = 0;
		while (mat[i][j] == '\0')
		{
			write(1, &mat[i][j], 1);
		}
		i++;
	}
}