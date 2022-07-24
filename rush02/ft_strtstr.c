/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:54:42 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/23 16:54:43 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		f;
	char	*aux;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		while (to_find[f] == str[f + i] && to_find[f] != '\0')
			f++;
		if (to_find[f] == '\0')
		{
			aux = cut_str(str + i);
			return (aux);
		}
		i++;
	}
	return ("");
}

char *cut_str(char *str)
{
	char *aux = (char*)malloc(80 * sizeof(char));
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\n')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			aux[j] = str[i];
			write(1, &str[i], 1);
		}	
		i++;
		j++;
	}
	printf("%s", aux);
	return (aux);
}
