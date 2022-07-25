/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:28:39 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/20 16:42:12 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
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
	char	src2[20] = "There";
	char	dest2[20] = "Hello ";
	printf("%s", ft_strncat(dest, src, 3));
	printf("\n%s", strncat(dest2, src2, 3));
	return (0);
}*/