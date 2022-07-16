/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:11:26 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/10 12:52:05 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char text);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || ((y > 1 && x > 1) && (i == y && j == x)))
				putchar('/');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				putchar('\\');
			else if ((i == 1 || i == y) || (j == 1 || j == x))
				putchar('*');
			else
				putchar(' ');
			j++;
		}
		i++;
		putchar('\n');
	}
}
