void	*calloc(size_t nmemb, size_t size)
{
	void	*buf;

	if (!(buf = (void *)malloc(size * nmemb)))
		return (NULL);
	ft_bzero(buffer, size * nmemb);
	return (buf);
}
