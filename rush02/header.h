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

char	*search_char(char *str, char *to_find);
int		is_character(char letter);
int		is_number(char letter);
int		str_len(char *str);
char	*cut_str(char *str, int size);