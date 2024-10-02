void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	unsigned char stop_c;
	size_t i;

	*d = (unsigned char *)dest;
	*s = (const unsigned char *)src;
	stop_c = (unsigned char)c;
	i = 0;

	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == stop_c)
		{
			return (void *)(d + i + 1);
		}
		i++;
	}

	return (NULL);
}	
