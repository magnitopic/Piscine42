/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:45:44 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/20 14:57:01 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (!(*s1 == *s2))
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = "Hello There";
	char	s2[] = "Hello There";

	printf("%d", ft_strncmp(s1, s2, 5));
	printf("\n%d", ft_strncmp(s1, s2, 5));
	return (0);
}*/
