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

//#include <stdio.h>

int	compare_str(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (str[i] != to_find[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			if (compare_str(str, to_find))
			{
				return (to_find);
			}
		}
		str++;
	}
	return ("\0");
}

/*int	main(void)
{
	char	str[20] = "Magnitopic";
	char	to_find[20] = "Mag";
	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
