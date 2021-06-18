#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str_empty;
	char	*str_akward;
	char	*str_lowercase;
	char	*str_not_all_lowercase;
	char	*str_not_lowercase_at_all;

	str_empty = "";
	str_lowercase = "abcdefghi";
	str_akward = "123˜`$&ˆ\%(&][!'{>,<";
	str_not_lowercase_at_all = "ABCDEFGHI";
	str_not_all_lowercase = "abcABC";
	printf("Expected: 1 Result: %d\n", ft_str_is_lowercase(str_empty));
	printf("Expected: 1 Result: %d\n", ft_str_is_lowercase(str_lowercase));
	printf("Expected: 0 Result: %d\n", ft_str_is_lowercase(str_akward));
	printf("Expected: 0 Result: %d\n", ft_str_is_lowercase(str_not_all_lowercase));
	printf("Expected: 0 Result: %d\n", ft_str_is_lowercase(str_not_lowercase_at_all));
	return (0);
}
