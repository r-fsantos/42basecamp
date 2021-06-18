/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 16:53:46 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/12 19:59:34 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);
void	ft_put_tab(int *tab, int tab_size);

int	main(void)
{
	int	i;
	int	*tab;
	int	tab_size;

	i = 0;
	tab_size = 10;
	tab = (int *) malloc(tab_size * sizeof(int));
	while (i < tab_size)
	{
		tab[i] = i;
		i++;
	}
	printf("Input: ");
	ft_put_tab(tab, tab_size);
	printf("\n");
	printf("Result:");
	ft_rev_int_tab(tab, tab_size);
	ft_put_tab(tab, tab_size);
	printf("\n");
	free(tab);
	return (0);
}

void	ft_put_tab(int *tab, int tab_size)
{
	int	i;

	i = 0;
	while (i < tab_size)
	{
		printf(" %d", tab[i]);
		i++;
	}
}
