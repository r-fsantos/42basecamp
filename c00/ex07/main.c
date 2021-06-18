#include <unistd.h>

#define MAX_NEG_INTEGER -2147483648
#define MAX_LENGHT 10
#define NEG_SIGNAL 1

void	ft_int_to_char(int nbr);
void	ft_putnbr(int nbr);
void	ft_putchar(char c);

int	main(void)
{
	char	new_line;

	new_line = '\n';
	ft_putnbr(42);
	ft_putchar(new_line);
	ft_putnbr(-42);
	ft_putchar(new_line);
	ft_putnbr(-420000);
	ft_putchar(new_line);
	ft_putnbr(420000);
	ft_putchar(new_line);
	ft_putnbr(-2147483648);
	ft_putchar(new_line);
	ft_putnbr(2147483647);
	ft_putchar(new_line);
	ft_putnbr(0);
	ft_putchar(new_line);
	return (0);
}
