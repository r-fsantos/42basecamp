/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 10:34:57 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/04 10:35:46 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	number[1] = '1';
	number[2] = '2';
	while (number[0] <= '7')
	{
		while (number[1] <= '8')
		{
			while (number[2] <= '9')
			{
				write(1, number, 3);
				if (!(number[0] == '7' && number[1] == '8' && number[2] == '9'))
					write(1, ", ", 2);
				number[2]++;
			}
			number[1]++;
			number[2] = number[1] + 1;
		}
		number[0]++;
		number[1] = number[0] + 1;
		number[2] = number[1] + 1;
	}
}
