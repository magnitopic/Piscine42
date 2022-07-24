/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:54:42 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/24 19:04:45 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*search_char(char *str, char *to_find)
{
	int		i;
	int		f;
	int		tam;
	char	*aux;

	i = 0;
	tam = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		while (to_find[f] == str[f + i] && to_find[f] != '\0')
			f++;
		if (is_number(str[f + i]) == 0)
		{
			if (to_find[f] == '\0')
			{
				tam = str_len(str + i);
				aux = cut_str((str + i), tam);
				return (aux);
			}
		}
		i++;
	}
	return ("-1");
}