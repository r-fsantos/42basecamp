/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:47:09 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/04 10:19:42 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
	return (0);
}

void	ft_print_alphabet(void)
{
	char	alphabet_letter;

	alphabet_letter = 'a';
	while (alphabet_letter <= 'z')
	{
		write(1, &alphabet_letter, 1);
		alphabet_letter++;
	}
}
