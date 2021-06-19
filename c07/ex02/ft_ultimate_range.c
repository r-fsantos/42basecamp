/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 00:49:12 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/17 15:12:12 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	range_size;

	if (range == NULL)
	{
		return (-1);
	}
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	range_size = 0;
	tab = malloc((max - min) * sizeof((int) *tab));
	*range = tab;
	while (min < max)
	{
		*tab++ = min++;
		range_size++;
	}
	return (range_size);
}
