/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:39:57 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/24 12:03:11 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_params(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char *argv[])
{
	char	*aux;
	int		pos;
	int		i;

	pos = 1;
	while (pos < argc - 1)
	{
		i = 0;
		while (argv[pos][i] == argv[pos + 1][i])
			i++;
		if (argv[pos][i] > argv[pos + 1][i])
		{
			aux = argv[pos];
			argv[pos] = argv[pos + 1];
			argv[pos + 1] = aux;
			pos = 0;
		}
		else
			pos++;
	}
	print_params(argc, argv);
	return (0);
}
