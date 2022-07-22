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

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size - 1)
	{
		aux = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = aux;
		i++;
	}
}

/*int	main(void)
{
	int	i = 0;
	int	size = 5;
	int	tab[] = {0, 1, 1, 6, 8};

	ft_rev_int_tab(tab, size);
	while (i <= size - 1)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
