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

int	main(int argc, char *argv[])
{
	int file;
	char buffer[BUFFER_SIZE];
	int bytes = 0; 
	char *prueba;
	// char num;
	// char ruta;

	file = open("numbers.dict", O_RDONLY);

	while ((bytes = read(file, buffer, BUFFER_SIZE)) > 0)
	{
		//write(1, buffer, bytes);
		if (argc == 2)
		{
			prueba = ft_strstr(buffer, argv[1]);
		}
		// else if (argc == 3)
		// 	argv[2]
	}
	return (0);
}