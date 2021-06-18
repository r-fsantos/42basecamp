/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 18:37:32 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/15 23:02:49 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	buffer;
	int	cursor;
	int	iteration_nbr;

	buffer = 0;
	iteration_nbr = size - 1;
	while (iteration_nbr--)
	{
		i = 0;
		cursor = size - 1;
		while (cursor--)
		{
			if (tab[i] > tab[i + 1])
			{
				buffer = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = buffer;
			}
			i++;
		}
	}
	return ;
}
