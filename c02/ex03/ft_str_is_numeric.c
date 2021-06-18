/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:03:23 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/08 17:49:24 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;

	is_numeric = 1;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			is_numeric = 0;
			return (is_numeric);
		}
		str++;
	}
	return (is_numeric);
}
