#include <stdio.h>

int ft_atoi(char *str)
{
	int control;
	int	symbol;
	int number;

	symbol = 0;
	control = 0;
	number = 0;
	while (str)
	{
		if (!control && *str == '-')
			symbol++;
		if (*str >= '0' && *str <= '9' && !control)
		{
			if (symbol%2==1)
				number *= symbol;
			control = 1;
		}
		if (control && (*str >= '0' && *str <= '9'))
			number = 10 * number + *str - '0';
		if (control && !(*str >= '0' && *str <= '9'))
			break;
		str++;
	}
	return (number);
}

/*int main(void)
{
	printf("%d", ft_atoi(" ---+--+1234ab567"));
	return (0);
}*/