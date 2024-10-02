void	*memchr(const void *s, int c, size_t n)
{
	const unsigned char *p;
	unsigned char cible;
	size_t i;

	*p = (const unsigned char *)s;
	cible = (unsigned char)c;
	i = 0;

	while (i < n)
	{
		if (p[i] == cible)
		return (void *)(p + i);
	i++;
	}
	return (NULL);
}
