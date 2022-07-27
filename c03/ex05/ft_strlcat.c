/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:47:54 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/27 13:05:47 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	i;
	unsigned int	a;
	unsigned int	s;

	c = 0;
	i = ft_strlen(dest);
	a = i;
	s = ft_strlen(src);
	if (size == 0 || size <= a)
	{
		return (s + size);
	}
	while (src[c] != '\0' && c < size - a - 1)
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (a + s);
}

/*int	main(void)
{
	char	src[20] = "There";
	char	dest[20] = "Hello ";
	char	src2[20] = "There";
	char	dest2[20] = "Hello ";
	printf("%d", ft_strlcat(dest, src, 10));
	printf("\n%s", dest);
	printf("\n%lu", strlcat(dest2, src2, 10));
	printf("\n%s", dest2);
	return (0);
}*/
