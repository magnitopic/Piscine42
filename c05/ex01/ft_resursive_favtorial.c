/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resursive_favtorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:20:35 by alaparic          #+#    #+#             */
/*   Updated: 2023/07/23 13:29:01 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	if (nb < 1)
		return (1);
	fact = ft_recursive_factorial(nb - 1) * nb;
	return (fact);
}

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(-1));
	return (0);
}
