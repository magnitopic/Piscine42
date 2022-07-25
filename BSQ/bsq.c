#include "header.h"


int	main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i <= argc - 1)
	{
		check_map(argv[i], argc);
		i++;
	}
	return (0);
}
