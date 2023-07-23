/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:55:44 by alaparic          #+#    #+#             */
/*   Updated: 2023/07/23 23:00:09 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index <= 1)
		return (1);
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

int	main(void)
{
	printf("%d\n", ft_fibonacci(7));
	return (0);
}
