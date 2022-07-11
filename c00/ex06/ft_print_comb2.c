/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:53:22 by alaparic          #+#    #+#             */
/*   Updated: 2022/07/11 15:53:24 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	changeValues(char one, char 2, int flag)
{
	if (flag)
	{

	}
	else
	{
		if nums[3] == '9':
			nums[2] + 1;
			nums[3]='0';
		else
			nums[3] + 1;
	}
}

void	ft_print_comb2(void)
{
	int	nums[4];

	nums[0]='0';
	nums[1]='0';
	nums[2]='0';
	nums[3]='1';
	while (nums[0] < '9' && nums[1] < '8')
	{
		// y = x + 1;
		changeValues(nums[2], nums[3], 1);
		// define in function
		while (nums[2] < '9' && nums[3] < '9')
		{
			write(1, &nums[0], 1);
			write(1, &nums[1], 1);
			write(1, ' ', 1);
			write(1, &nums[2], 1);
			write(1, &nums[3], 1);
			write(1, ", ", 2);
			changeValues(nums[2], nums[3], 0);
		}
		changeValues(nums[0], nums[1], 0);
	}
}

int main(void)
{
	ft_print_comb2();
	return 0;
}
