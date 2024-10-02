char	*strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		return (char *)s;
	str++;
	}
	if (c == '\0')
	return (char *)s;
	return (NULL);
}
