char	*ft_malloc(char *src)
{
	char	*new;
	int		i;
	int		c;

	c = 0;
	while (src[c])
		++c;
	if (!(new = malloc(sizeof(char) * (c + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}