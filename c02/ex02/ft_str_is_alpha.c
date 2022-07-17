/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:50:12 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/17 19:50:15 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int is_alpha(void)
{
	return 0;
}

int ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122)))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	*src = "abcdefghijklmnopqrstuvwxyzABCDEFGHIKLMNOPQRSTUVWXYZ";
	int	output=ft_str_is_alpha(src);
	printf("%d", output);
	return (0);
}*/