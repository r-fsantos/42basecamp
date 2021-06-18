/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:03:23 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/08 18:03:50 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;

	is_uppercase = 1;
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
		{
			is_uppercase = 0;
			return (is_uppercase);
		}
		str++;
	}
	return (is_uppercase);
}
