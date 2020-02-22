//header 42

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*pd;
	const unsigned char	*ps;
	unsigned int		i;

	i = 0;
	pd = dst;
	ps = src;
	if (n == 0)
		return (dst);
	while (ps[i] != c)
		i++;
	if (i < n)
	{
		while (n > 0) 
		{	
			*pd++ = *ps++;
			n--;	
		}
		return (pd);
	}
	return (NULL);
}
