/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 14:33:30 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/14 18:35:17 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_white_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	return (i);
}

int	ft_get_signals(char *str)
{
	int	i;

	i = 0;
	while (*str == '-' || *str == '+')
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_get_nbrsignal(char *str)
{
	int	signal;

	signal = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			signal *= -1;
		}
		str++;
	}
	return (signal);
}

int	ft_chartoint(char *str)
{
	int	integer;

	integer = 0;
	while (*str >= '0' && *str <= '9')
	{
		integer *= 10;
		integer += (*str - '0');
		str++;
	}
	return (integer);
}

int	ft_atoi(char *str)
{
	int	signal;
	int	white_spaces;
	int	integer;
	int	signed_integer;

	integer = 0;
	signed_integer = 0;
	white_spaces = ft_get_white_spaces(str);
	str += white_spaces;
	signal = ft_get_nbrsignal(str);
	str += ft_get_signals(str);
	integer = ft_chartoint(str);
	signed_integer = signal * integer;
	return (signed_integer);
}
