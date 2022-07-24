/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:20:18 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/24 16:20:19 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);
char	*cut_str(char *str);
int		gestion_rutas(int argc, char **argv, char **num, char **ruta);
