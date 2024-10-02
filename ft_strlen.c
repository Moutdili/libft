const void	*ft_strlen(const char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
#include <unistd.h>
int	main(void)
{
	char *haystack = "salut toi";
	write (1,ft_strlen(haystack), 1);
	return (0);
}

	
