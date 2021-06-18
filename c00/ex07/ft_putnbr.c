/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 11:01:14 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/11 14:14:15 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

#define MAX_NEG_INTEGER -2147483648
#define MAX_LENGHT 10
#define NEG_SIGNAL 1

void	ft_int_to_char(int nbr)
{
	int		i;
	char	arr_char_from_integer[10];

	i = 0;
	while (nbr > 0)
	{
		arr_char_from_integer[i] = (nbr % 10) + 48;
		nbr = (int)(nbr / 10);
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(arr_char_from_integer[i]);
		i--;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 0)
		ft_int_to_char(nbr);
}
