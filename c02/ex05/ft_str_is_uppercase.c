/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:28:31 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/18 11:28:35 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 65 && *str <= 90))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	*src = "ABCDEFGHIKLMNOPQRSTUVWXYZ";
	int	output = ft_str_is_uppercase(src);
	printf("%d", output);
	return (0);
}*/
