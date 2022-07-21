/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:12:43 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/19 10:33:52 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// were gonna use different functions from different files from this module

//control is a bool that is True when currentlly
//in a word and False when outside one
int	ft_str_is_alphanum(char str)
{
	if (!((str >= 65 && str <= 90) || (str >= 97 && str <= 122)))
	{
		if (!(str >= 48 && str <= 57))
			return (0);
	}
	return (1);
}

int	ft_str_is_lower(char str)
{
	if (!(str >= 97 && str <= 122))
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_upper(char str)
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
		if (!ft_str_is_alphanum(str[i]))
			control = 0;
		if (ft_str_is_alphanum(str[i]) && control && ft_str_is_upper(str[i]))
			str[i] = str[i] + 32;
		if (!control && ft_str_is_alphanum(str[i]) && ft_str_is_lower(str[i]))
			str[i] = str[i] - 32;
		if (!control && ft_str_is_alphanum(str[i]))
			control = 1;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str[100]="SalUt, Comment tU vas ? 42mots quARANTE-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
