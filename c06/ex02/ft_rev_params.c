/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 21:03:21 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/13 22:56:47 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	return (str_len);
}

void	ft_putnchar(char *str, unsigned int n)
{
	while (n--)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*param;

	if (argc > 1)
	{
		i = 1;
		argv += argc;
		while (i++ < argc)
		{
			argv--;
			param = *argv;
			ft_putnchar(param, ft_strlen(param));
			ft_putchar('\n');
		}
	}
	return (0);
}
