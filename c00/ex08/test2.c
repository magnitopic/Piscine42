/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:32:22 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/13 18:32:26 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_nums(int *nums[], int n)
{
	char	letra;
	int		i;

	i = -1;
	while (i++ < n - 1)
	{
		/*letra = nums[i] + 48;
		write(1, &letra, 1);*/
		printf("%d", &nums[i]);
	}
	write(1, ", ", 2);
}

void	big_boy(int num, int maxVal, int *nums[], int n)
{
	while (num <= maxVal)
	{
		print_nums(nums, n);
		num++;
		big_boy(num, maxVal, &nums[0], n);
	}
}

void	ft_print_combn(int n)
{
	int	nums[10];
	int	i;
	int	current_num;

	i = 0;
	if (n > 10 || n < 1)
		return ;
	while (i < n)
	{
		nums[i] = i;
		i++;
	}
	while (nums[n - 2] < 10 - n)
	{
		big_boy(nums[n - 1], 10 - n + n -1, &nums[0], n);
		nums[n - 2]++;
		nums[n - 1] = nums[n - 2] + 1;
	}
}

int	main(void)
{
	ft_print_combn(5);
	return (0);
}
