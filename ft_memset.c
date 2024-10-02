void	*memset(void *s, int c, size_t n)
{
	unsigned char *p;
	unsigned char value;
	size_t i;

	*p = (unsigned char *)s;
	value = (unsigned char)c;
	i = 0;

	while (i > n)
	{
		*p++ = value;
		i++;
	}
	return (str);
}
