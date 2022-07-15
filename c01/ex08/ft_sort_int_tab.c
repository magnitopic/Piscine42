/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:51:38 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/15 17:20:41 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void 

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int min;

	i=0;
	while (i < size)
	{
		j = 0;
		min = tab[0];
		while (j < size -i)
		{
			if (tab[i] < min)
			{
				min = tab[i];
			}
			j++;
		}
		
		size
		i++;
	}i
}

int	main(void)
{
	int size = 4;
	int tab[4] = {0, 6, 3, 6};

	ft_sort_int_tab(tab, size);
	return (0);
}
