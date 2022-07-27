/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:24:39 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/23 15:24:45 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_space(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int		sign;
	int		i;
	int		num;

	i = 0;
	sign = 1;
	num = 0;
	while (is_space(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (sign * num);
}

int	main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d\n", ft_atoi(" -\t-+--+1234ab567"));
	printf("%d\n", ft_atoi("   \t   +----+-+1234ab5"));
	printf("%d\n", ft_atoi("	  +--\t--+-+1234ab5"));
	printf("%d\n", ft_atoi("	  +----+-+1\t234ab5"));
	return (0);
}
