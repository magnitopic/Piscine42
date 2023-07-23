/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:53:32 by alaparic          #+#    #+#             */
/*   Updated: 2023/07/23 13:21:46 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 0;
	fact = 1;
	while (++i <= nb)
		fact *= i;
	return (fact);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}
