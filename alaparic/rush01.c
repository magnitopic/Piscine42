/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:11:26 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/10 12:13:22 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char text);

void	rush(int x, int y)
{
	if (x==5 && y==4)
	{
		putchar('*');
	}
	
}
