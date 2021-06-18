#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[10];
	char src[] = "abcd";
	int size;

	size = ft_strlcpy(dest, src, sizeof(dest));
	
	if (
		size == 4
		&& dest[0] == 'a'
		&& dest[1] == 'b'
		&& dest[2] == 'c'
		&& dest[3] == 'd'
		&& *(dest + 4) == '\0'
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
	printf("\n");
	return(0);
}