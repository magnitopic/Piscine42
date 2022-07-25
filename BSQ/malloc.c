#include "header.h"

char	*ft_malloc(char *src)
{
	char	*new;
	int		i;
	int		c;

	c = 0;
	while (src[c])
		++c;
	if (!(new = malloc(sizeof(char) * (c + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_malloc_array(char **src, int nl, int nc)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	x = (int **)malloc(filas * sizeof(int*));
	while (i < nl)
	{
		x[i] = (int*)malloc(columnas*sizeof(int)); 
		i++;
	}
	// Damos Valores a la Matriz 
	x[0][0] = 1; 
	x[0][1] = 2; 
	x[0][2] = 3; 

	x[1][0] = 4; 
	x[1][1] = 5; 
	x[1][2] = 6; 
}