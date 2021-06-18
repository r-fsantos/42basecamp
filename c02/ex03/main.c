#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str_empty;
	char	*str_numeric;
	char	*str_non_numeric;

	str_empty = "";
	str_numeric = "0123456789";
	str_non_numeric = "123˜`$&ˆ\%(&][!'{>,<";
	printf("Expected: 1 Result: %d\n", ft_str_is_numeric(str_empty));
	printf("Expected: 1 Result: %d\n", ft_str_is_numeric(str_numeric));
	printf("Expected: 0 Result: %d\n", ft_str_is_numeric(str_non_numeric));
	return (0);
}
