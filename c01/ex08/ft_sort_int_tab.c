/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:51:38 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/16 20:51:20 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	pos;

	pos = 0;
	while (pos < size - 1)
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
}

/*int	main(void)
{
	int	tab[1] = {1};
	int	size = 1;
	ft_sort_int_tab(tab, size);
	int pos = 0;
	while(pos < size)
	{
		printf("%d", tab[pos]);
		if (pos != size - 1)
			printf(", ");
		pos++;
	}
	return (0);
}*/
