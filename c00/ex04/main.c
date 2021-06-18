/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 20:37:05 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/04 10:26:58 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_is_negative(int n);

int	main(void)
{
	int		nb_1;
	int		nb_2;
	int		nb_3;
	char	newline;

	nb_1 = 42;
	nb_2 = -42;
	nb_3 = 0;
	newline = '\n';
	ft_is_negative(nb_1);
	ft_putchar(newline);
	ft_is_negative(nb_2);
	ft_putchar(newline);
	ft_is_negative(nb_3);
	ft_putchar(newline);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if (n >= 0)
		ft_putchar(positive);
	if (n < 0)
		ft_putchar(negative);
}
