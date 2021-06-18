/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 00:09:10 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/14 00:09:10 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_multiple_chars(char *str, unsigned int n)
{
	while (n--)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print_error(void)
{
	ft_put_multiple_chars("Error\n", 6);
}
