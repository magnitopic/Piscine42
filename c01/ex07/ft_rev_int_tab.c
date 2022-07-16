/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:04:59 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/15 12:43:07 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	*rev_array;

	i = 0;
	while (i <= size - 1)
	{
		rev_array[i] = tab[(size - 1) - i];
		i++;
	}
	i = 0;
	while (i <= size - 1)
	{
		tab[i] = rev_array[i];
		i++;
	}
}

/*int	main(void)
{
	int	i = 0;
	int	size = 4;
	int	tab[4] = {0, 1, 1, 6};

	ft_rev_int_tab(tab, size);
	while (i <= size - 1)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
