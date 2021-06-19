/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:31:48 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/17 23:51:08 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min < max)
	{
		i = 0;
		tab = malloc((max - min) * sizeof(int));
		while (min < max)
		{
			tab[i++] = min++;
		}
		return (tab);
	}
	return (NULL);
}
