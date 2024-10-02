char *sttrchr(const char *s, int c)
{
	const char *lastocc = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		lastocc = s;
	s++;
	}
	if (c == '\0')
	return (char *)s;
	return (char *)lastocc;
}
