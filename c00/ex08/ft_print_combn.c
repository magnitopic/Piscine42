/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:25:32 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/13 11:25:34 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_nums(int nums[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &nums[i], 1);
		i++;
	}
	write(1, ", ", 2);
}

void	add_nums(int *nums, int n, int current_num, int max)
{
	while (nums[current_num] < max)
	{
		print_nums(nums, n);
	}
}

void	ft_print_combn(int n)
{
	int	nums[10];
	int	i;
	int	current_num;

	i = 0;
	if (n > 10 || n < 1)
		return (-1);
	while (i < n)
	{
		nums[i] = i;
		i++;
	}
	// nums[n]-1 <= 10 - n
	i = 0;
	current_num = 0;
	while (i < n)
	{
		if (&nums[0] == &nums[current_num])
			return ;
		else
			add_nums(*nums, n, current_num);
		i++;
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
