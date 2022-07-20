/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:57:13 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/20 16:23:27 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[20] = "There";
	char	dest[20] = "Hello ";
	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}*/
