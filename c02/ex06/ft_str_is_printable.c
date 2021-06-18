/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:03:23 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/08 18:29:06 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_printable;

	is_printable = 1;
	while (*str != '\0')
	{
		if (*str == 127 || (*str >= 0 && *str <= 31))
		{
			is_printable = 0;
			return (is_printable);
		}
		str++;
	}
	return (is_printable);
}
