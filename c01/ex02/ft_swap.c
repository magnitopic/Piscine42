/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:12:52 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/14 11:53:46 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	y;

	y = *a;
	*a = *b;
	*b = y;
}

/*int	main(void)
{
	int a = 11, b = 5;
	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return (0);
}*/