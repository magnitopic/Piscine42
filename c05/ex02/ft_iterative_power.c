/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:30:54 by alaparic          #+#    #+#             */
/*   Updated: 2023/07/23 13:49:29 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	i = -1;
	result = 1;
	while (++i < power)
		result *= nb;
	return (result);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 0));
	return (0);
}
