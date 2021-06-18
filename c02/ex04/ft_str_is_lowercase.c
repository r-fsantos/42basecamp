/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:03:23 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/08 17:56:55 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;

	is_lowercase = 1;
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		{
			is_lowercase = 0;
			return (is_lowercase);
		}
		str++;
	}
	return (is_lowercase);
}
