/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 23:14:31 by alaparic          #+#    #+#             */
/*   Updated: 2023/07/23 23:40:42 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = nb;
	if (nb < 2)
		return (0);
	while (--i >= 2)
		if (nb % i == 0)
			return (0);
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(7));
	return (1);
}
