/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 19:47:14 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/09 18:24:49 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet_letter;

	alphabet_letter = 97;
	while (alphabet_letter <= 122)
	{
		write(1, &alphabet_letter, 1);
		alphabet_letter++;
	}
}
