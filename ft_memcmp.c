int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p;
	const unsigned char *r;
	size_t i;

	*p = (const unsigned char *)s1;
	*r = (const unsigned char *)s2;
	i = 0;

	while (i < n)
	{
		if (p[i] != r[i])
		{
			return (p[i] - r[i]);
		}
		i++;
	}
	return (0);
}
