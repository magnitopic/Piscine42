#include <stdio.h>

char *ft_strupcase(char *str)
{
	int i;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}

int main(void)
{
	char str[12] = "Hello There";
	printf("%s", ft_strupcase(str));
	return (0);
}