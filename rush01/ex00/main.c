/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 20:00:35 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/14 01:43:29 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_error(void);
void	ft_put_multiple_chars(char *c, unsigned int n);
void	ft_putchar(char c);
void	ft_write_rules(int rules[4][4], int *numbers);
void	ft_put_matrix(int rules[4][4]);
int		filter(char *numbers, int *arr);
int		str_len(char *c);

int	main(int argc, char **argv)
{
	int		number[31];
	int		rules[4][4];
	char	*input;

	input = argv[1];
	if (argc != 2 || (filter(input, number) == -1))
		ft_print_error();
	else
	{
		ft_print_error();
		return (0);
		ft_write_rules(rules, number);
		ft_put_matrix(rules);
	}
	return (0);
}
