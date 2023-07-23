/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 23:28:29 by alaparic          #+#    #+#             */
/*   Updated: 2023/07/23 23:41:29 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_is_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	int	n_prime;

	n_prime = nb;
	while (!ft_is_prime(n_prime))
		n_prime++;
	return (n_prime);
}

int	main(void)
{
	printf("%d\n", ft_find_next_prime(984));
	return (0);
}
