/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 13:22:58 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/14 17:14:46 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	char_nbrs;

	char_nbrs = 0;
	while (str[char_nbrs] != '\0')
		char_nbrs++;
	write(1, str, char_nbrs);
}
