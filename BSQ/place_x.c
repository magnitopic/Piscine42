#include "header.h"

void	place_x(char **mat, int lenMat)
{
	int i;
	int j;
	int x;
	int y;
	int round;
	int squares[];

	i=0;
	j=0;

	while (*mat[i] == '\0')
	{
		j = 0;
		while (mat[i][j] == '\0')
		{
			x = j;
			y = i;
			round =0;
			// TODO: comprobar las esquinas
			while (x <= lenMat && y <= lenMat && mat[y][x] != 'o')
			{
				x = j + round;
				y = i;
				round++;
				while (y != (i + round))
				{
					if (x != (j + round))
						x++;
					else
						y++;
				}
			}
			squares[]
			j++;
		}
		i++;
	}
}