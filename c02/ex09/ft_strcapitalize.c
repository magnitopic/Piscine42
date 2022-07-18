/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:12:43 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/18 19:12:54 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// were gonna use different functions from different files from this module

//control is a bool that is True when currentlly
//in a word and False when outside one

int	ft_str_is_alpha(char str)
{
	if (!((str >= 65 && str <= 90) || (str >= 97 && str <= 122)))
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_lowercase(char str)
{
	if (!(str >= 97 && str <= 122))
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_uppercase(char str)
{
	if (!(str >= 65 && str <= 90))
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 0;
	while (str[i] != '\0')
	{
		if (!ft_str_is_alpha(str[i]))
			control = 0;
		if (!control && ft_str_is_alpha(str[i]))
		{
			str[i] = str[i] - 32;
			control = 1;
		}
		if (ft_str_is_alpha(str[i]) && control && ft_str_is_uppercase(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[100]="salut, comment tU vas ? 42mots quARANTE-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
