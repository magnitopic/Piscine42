/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:28:15 by alaparic          #+#    #+#             */
/*   Updated: 2023/07/23 21:38:20 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = ft_recursive_power(nb * nb, power - 1);
	return (result);
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 2));
	return (0);
}
