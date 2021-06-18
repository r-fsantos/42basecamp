#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str_empty;
	char	*str_akward;
	char	*str_uppercase;
	char	*str_not_all_uppercase;
	char	*str_not_uppercase_at_all;
	char	*str_backslash;

	str_backslash = "ABC";
	str_empty = "";
	str_uppercase = "ABCDEFGHI";
	str_not_all_uppercase = "abcABC";
	str_akward = "123˜`$&ˆ\%(&][!'{>,<";
	str_not_uppercase_at_all = "abcdefghi";
	printf("Expected: 1 Result: %d\n", ft_str_is_printable(str_empty));
	printf("Expected: 1 Result: %d\n", ft_str_is_printable(str_uppercase));
	printf("Expected: 1 Result: %d\n", ft_str_is_printable(str_akward));
	printf("Expected: 1 Result: %d\n", ft_str_is_printable(str_not_all_uppercase));
	printf("Expected: 1 Result: %d\n", ft_str_is_printable(str_not_uppercase_at_all));
	printf("Expected: 1 Result: %d\n", ft_str_is_printable(str_backslash));
	return (0);
}
