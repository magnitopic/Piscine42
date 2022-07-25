#include "header.h"

void	*check_map(char *map_name, int argc)
{
	//char	*map = NULL;
	char	**mat = NULL;
	int		i;
	int		j;
	int		nl;
	int		nc;
	int		fd;
	int		readbytes;
	char	buffer[1024];

	i = 0;
	j = 0;
	nl = 0;
	nc = 0;
	fd = open(map_name, O_RDONLY);
	if (argc != 0)
	{
		i = 0;
		while ((readbytes = read(fd, buffer, 1024)) != 0)
		{
			while (buffer[i] != '\0')
			{	
				if (buffer[i] == '\n')
				{
					nl++;
					i++;
				}
				else
					i++;
			}
			nc = i;
			**mat = mat[nl][nc];
			write (1, &buffer[i], 1);
		}
		buffer[i] = '\0';
		i = 0;
		nl = 0;
		while (buffer[i] != '\0')
		//write (1, "1", 1);
		{
			while (buffer[i] != '\n')
			{
				write (1, "2", 1);
				mat[nl][j] = buffer[i];
				j++;
				i++;
				write (1, &buffer[i], 1);
			}
			nl++;
		}
		printf("nl %d\n", nl);
		print_natrix(mat);
		//map = ft_malloc(mat);
		//mat = ft_malloc(map);
		//printf("%s\n", mat);
		close(fd);
		//free(map);
	}
	return (0);
}