/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:54:47 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/19 02:32:31 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);
int	ft_base_error(char *base);
int	ft_belongs_to_base(char c, char *base);
int	ft_strlen(char *str);

int	main(void)
{
	int	ret;
	
	ret = ft_atoi_base("\t \v \n \r ----+FF", "0123456789ABCDEF");
	printf("%d\n", ret);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signal;
	int integer;
	int	base_len;
	
	i = 0;
	integer = 0;
	signal = -1;
	base_len = ft_strlen(base);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] != '\0' && (ft_belongs_to_base(str[i], base) != - 1))
	{
		integer = (integer * base_len) - ft_belongs_to_base(str[i], base);
		i++;
	}
	return (signal * integer);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_belongs_to_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i++] != '\0')
		if (c == base[i])
			return (i);
	return (-1);
}

int	ft_base_error(char *base)
{
	int	i;
	int	signals;
	int	white_spaces;
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
		white_spaces = (base[i] >= 9 && base[i] <= 13) || base[i] == 32;
		signals = base[i] == '+' || base[i] == '-';
		if (base_values[(int) base[i]] == 1 || signals || white_spaces)
			return (1);
		base_values[(int)base[i]] = 1;
		i++;
	}
	return (has_error);
}
