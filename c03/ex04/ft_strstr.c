/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:44:07 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/20 16:44:15 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (to_find[i] != '\0')
		i++;
	while (*str != '\0')
	{
		if (*str == )
		str++;
	}
	return ('\0');
}

int	main(void)
{
	char	str[20] = "Magnitopic";
	char	to_find[10] = "Mag";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}