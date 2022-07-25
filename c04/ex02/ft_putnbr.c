/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:14:44 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/25 14:02:33 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putnbr(int nb)
{
	char	num;

	while (nb > 0)
	{
		num = (nb % 10) + '0';
		write(1, &num, 1);
		nb = (nb / 10);
	}
}

int main(void)
{
	ft_putnbr(INT_MIN);
	printf("\n%i", INT_MAX);
	return (0);
}
