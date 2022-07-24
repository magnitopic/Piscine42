/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:58:50 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/23 11:58:52 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{
	int		file;
	char	buffer[2048];
	int		bytes;
	char	*prueba;

	if (argc == 3)
		file = open(argv[2], O_RDONLY);
	else if (argc == 2)
		file = open("numbers.dict", O_RDONLY);
	else
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	bytes = read(file, buffer, 2048);
	if (bytes > 0)
	{
		prueba = search_char(buffer, argv[1]);
	}
	return (0);
}