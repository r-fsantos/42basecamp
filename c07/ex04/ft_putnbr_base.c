/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:55:50 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/19 01:44:57 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
int		ft_base_error(char *base);
void	ft_putnbr(int nbr, int base_len, char *base);
void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(10, "01");
	write(1, "\n", 1);
	ft_putnbr_base(5000, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(10, "p");
	write(1, "\n", 1);
	ft_putnbr_base(10, "+p");
	write(1, "\n", 1);
	ft_putnbr_base(10, "");
	ft_putnbr_base(10, "11");
	write(1, "\n", 1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_base_error(base))
		return ;
	ft_putnbr(nbr, ft_strlen(base), base);
}

int	ft_base_error(char *base)
{
	int	i;
	int	signals;
	int	has_error;
	int	base_values[256];

	i = 0;
	has_error = 0;
	if (!ft_strlen(base) || ft_strlen(base) == 1)
		has_error = 1;
	while (i < 256)
		base_values[i++] = 0;
	i = 0;
	while (base[i] != '\0')
	{
		signals = base[i] == '+' || base[i] == '-';
		if (base_values[(int) base[i]] == 1 || signals)
		{
			has_error = 1;
			break ;
		}
		base_values[(int)base[i]] = 1;
		i++;
	}
	return (has_error);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr(int nbr, int base_len, char *base)
{
	char	c;

	if (nbr >= 0 && nbr < base_len)
	{
		c = base[nbr];
		write(1, &c, 1);
		return ;
	}
	if (nbr < 0)
	{
		c = base[-1 * (nbr % base_len)];
		write(1, "-", 1);
		ft_putnbr((-1 * (nbr / base_len)), base_len, base);
	}
	else
	{
		c = base[(nbr % base_len)];
		ft_putnbr((nbr / base_len), base_len, base);
	}
	write(1, &c, 1);
}
