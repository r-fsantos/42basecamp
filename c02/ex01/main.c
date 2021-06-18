#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_strlen(char *str);

/*
** Tests Scenario
** ---------------
** sizeof(src) == sizeof(dest) 
** 		Enough space to fill dest with the src
** sizeof(src) > sizeof(dest) 
**		copy until dest is full filled and do not add \0 to dest
** sizeof(src) < sizeof(dest) 
**		copy src and add \0 until the dest is full filled
*/

int	main(void)
{
	char			*src;
	char			*dest;
	char			*strcpy;
	unsigned int	srclen;
	char			a[5];
	char			b[5];

	a[0] = 't';
	a[1] = 'e';
	a[2] = 's';
	a[3] = 't';
	a[4] = 'e';
	ft_strncpy(b, a, 3);
	if (b[0] == 't' && b[1] == 'e' && b[2] == 's')
	{
		printf("OK!\n");
	}
	else
	{
		printf("KO!\n");
	}
	src = "Don't panic :)";
	srclen = ft_strlen(src);
	dest = malloc(srclen);
	strcpy = ft_strncpy(dest, src, srclen);
	printf("src:    %s\n", src);
	printf("dest:   %s\n", dest);
	printf("strcpy: %s\n", strcpy);
	printf("\n");
	free(dest);
	return (0);
}

int	ft_strlen(char *str)
{
	int	char_nbr;

	char_nbr = 0;
	while (str[char_nbr] != '\0')
		char_nbr++;
	return (char_nbr);
}
