/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 19:48:52 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/02 19:55:21 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet_letter;

	alphabet_letter = 'z';
	while (alphabet_letter >= 'a')
	{
		write(1, &alphabet_letter, 1);
		--alphabet_letter;
	}
}
