/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:28:13 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/14 20:51:25 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	y;

	y = *a;
	*a = y / *b;
	*b = y % *b;
}

/*int	main(void)
{
	int a=11, b=5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
	return (0);	
}*/
