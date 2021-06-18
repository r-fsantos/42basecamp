/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:41:05 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/12 20:02:30 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buffer;
	int	iterations;

	i = 0;
	iterations = size / 2;
	while (i < iterations)
	{
		buffer = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - i - 1] = buffer;
		i++;
	}
}
