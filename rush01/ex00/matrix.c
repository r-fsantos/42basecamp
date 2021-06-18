/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 00:09:03 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/14 00:25:33 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_write_rules(int rules[4][4], int *numbers)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			rules[i][j] = numbers[k];
			j++;
			k++;
		}
		i++;
	}
}

void	ft_put_matrix(int rules[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(rules[i][j] + 48);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
