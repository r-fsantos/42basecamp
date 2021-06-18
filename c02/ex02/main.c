#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str_alpha;
	char	*str_empty;
	char	*str_nonalpha;

	str_empty = "";
	str_alpha = "ABCDEFabcdef";
	str_nonalpha = "123˜`$&ˆ\%(&][!'{>,<";
	printf("Expected: 1 Result: %d\n", ft_str_is_alpha(str_empty));
	printf("Expected: 1 Result: %d\n", ft_str_is_alpha(str_alpha));
	printf("Expected: 0 Result: %d\n", ft_str_is_alpha(str_nonalpha));
	return (0);
}
