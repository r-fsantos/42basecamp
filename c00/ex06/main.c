/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:16:08 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/03 21:44:34 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define	FST_MAX 98
#define	SND_MAX 99

void	ft_print_comb2(void);
void	ft_print_number(int number);
char	ft_int_to_char(int number);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_print_number(int number)
{
	char	converted[2];

	if (number <= 9)
	{
		converted[0] = '0';
		converted[1] = number + 48;
	}
	else if (number <= SND_MAX)
	{
		converted[0] = (number / 10) + 48;
		converted[1] = (number % 10) + 48;
	}
	write(1, converted, 2);
}

void	ft_print_comb2(void)
{
	int	fst_number;
	int	snd_number;

	fst_number = 0;
	snd_number = 1;
	while (fst_number <= FST_MAX)
	{
		while (snd_number <= SND_MAX)
		{
			if (fst_number != snd_number)
			{
				ft_print_number(fst_number);
				write(1, " ", 2);
				ft_print_number(snd_number);
				if (fst_number != FST_MAX)
					write(1, ", ", 2);
				snd_number++;
			}
		}
		fst_number++;
		snd_number = fst_number + 1;
	}
}
