/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:39:57 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/21 19:39:59 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_params(int argc, char *argv[])
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
	return (0);
}




int	main(int argc, char *argv[])
{
	int	aux;
	int	pos;

	pos = 0;
	while (pos <  - 1)
	{
		if (tab[pos] > tab[pos + 1])
		{
			aux = tab[pos];
			tab[pos] = tab[pos + 1];
			tab[pos + 1] = aux;
			pos = 0;
		}
		else
			pos++;
	}
	print_params(argc, argv);
	return (0);
}