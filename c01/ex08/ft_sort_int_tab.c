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
#include <stdio.h>

void	move_array(int *tab, int first_num, int num_pos)
{
	int	i;

	i = 0;
	while (tab[i] != first_num)
	{
		i++;
	}
	while (i > 0)
	{
		tab[i] = tab[i - 1];
		i--;
	}
	tab[num_pos] = first_num;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		min = tab[i];
		while (j < size - i)
		{
			if (tab[i] < min)
			{
				min = tab[i];
			}
			j++;
		}
		move_array(tab, min, i);
		i++;
	}
}

int	main(void)
{
	int size = 6;
	int tab[6] = {0, 6, 3, 6, 7, 1};
	ft_sort_int_tab(tab, size);

	while (size > 0)
	{
		printf("%d ", tab[size]);
		size--;
	}
	return (0);
}
