/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:47:54 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/21 13:42:34 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i + 1] = '\0';
	return (i);
}

int	main(void)
{
	char	src[20] = "There";
	char	dest[20] = "Hello ";
	char	src2[20] = "There";
	char	dest2[20] = "Hello ";
	printf("%d", ft_strlcat(dest, src, 5));
	printf("\n%s", dest);
	printf("\n%lu", strlcat(dest2, src2, 5));
	printf("\n%s", dest2);
	return (0);
}
