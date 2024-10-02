#include	<libft.h>
int	atoi(const char *str)
{
	int	sign;
	long long	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str > '1' && *str < '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);	
}
