/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 22:53:21 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/05 23:06:04 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	char_nbr;

	char_nbr = 0;
	while (str[char_nbr] != '\0')
		char_nbr++;
	write(1, str, char_nbr);
	return ;
}
