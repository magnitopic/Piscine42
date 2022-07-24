/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:15:41 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/24 21:15:43 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_character(char letter)
{
	if (letter >= '!' && letter <= 126)
		return (1);
	return (0);
}

int	is_number(char letter)
{
	if (letter >= '0' && letter <= '9')
		return (1);
	return (0);
}

int	str_len(char *str)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (is_character(str[i]) == 0)
		i++;
	while (str[i] != '\n')
	{
		size++;
		i++;
	}
	return (size);
}

char	*cut_str(char *str, int size)
{
	int		i;
	char	*aux = (char*)malloc((size + 1)*sizeof(char));
	int		cont_aux;

	i = 0;
	cont_aux = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (is_character(str[i]) == 0)
		i++;
	while (str[i] != '\n')
	{
		aux[cont_aux] = str[i];
		cont_aux++;
		i++;
	}

	aux[cont_aux] = 0;
	printf("%s\n", aux);
	free(aux);
	return (aux);
}