#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  i;
    size_t  str_len;

    if (!s)
        return (NULL);
    str_len = ft_strlen(s);
    if (start >= str_len)
        return (ft_strdup(""));
    if (len > str_len - start)
        len = str_len - start;
    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);
    i = 0;
    while (i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    
    return (substr);
}
