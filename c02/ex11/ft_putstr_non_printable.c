/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:50:32 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/19 13:50:34 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char str)
{
	if (!(str >= 32 && str <= 126))
	{
		return (0);
	}
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*c;

	c = "0123456789abcdef";
	while (*str != '\0')
	{	
		if (!ft_str_is_printable(*str))
		{
			write(1, "\\", 1);
			write(1, &c[*str / 16], 1);
			write(1, &c[*str % 16], 1);
		}
		else
			write(1, &*str, 1);
		str++;
	}
}

/*int main(void)
{
	char	str[100] = "Coucou\ntu vas\t bien ?";
	ft_putstr_non_printable(str);
	return (0);
}*/