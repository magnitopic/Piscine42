/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:44:07 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/21 10:47:41 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	c_aux;

	c = 0;
	c_aux = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		while (str[c + c_aux] == to_find[c_aux] && str[c + c_aux] != '\0')
			c_aux++;
		if (to_find[c_aux] == '\0')
			return (str + c);
		c++;
		c_aux = 0;
	}
	return (0);
}

/*int	main(void)
{
	char	str[20] = "Magnitopic";
	char	to_find[20] ="i";
	printf("%s", ft_strstr(str, to_find));
	printf("\n%s", strstr(str, to_find));
	return (0);
}*/