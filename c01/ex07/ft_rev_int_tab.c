void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int *revArray;

	i = 0;
	while (i <= size)
	{
		revArray[i] = tab[i - size - 1];
		i++;
	}
	tab = revArray;
}

int main(void)
{
	int size = 4;
	int tab[4] = {0, 1, 1, 6};
	ft_rev_int_tab(tab, size);
	return (0);
}