void	*check_map(char *map_name, int argc)
{
	char	*map = (NULL);
	int		i;
	int		nl;
	int		fd;
	int		readbytes;
	char	buffer[1024];

	i = 0;
	nl = 0;
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
					write(1, &buffer[i],1);
					nl++;
					i++;
				}
				else
					i++;
			}
		}
		printf("nl %d", nl);
		map = ft_malloc(buffer);
		printf("%s", map);
		close(fd);
		free(map);
	}
	return (0);
}