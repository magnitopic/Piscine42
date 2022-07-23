#include <stdio.h>

int atoi_copy(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int main(void)
{
	printf("%d",atoi_copy("764764278"));
	return(0);
}