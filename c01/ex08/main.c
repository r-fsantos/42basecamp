/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 18:05:21 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/07 01:47:00 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);
void	ft_put_tab(int *tab, int tab_size);

// int	main(void)
// {
// 	int	i;
// 	int	*tab;
// 	int	tab_size;

// 	i = 0;
// 	tab_size = 10;
// 	tab = (int *)(malloc(tab_size * sizeof(int)));
// 	tab[0] = 8;
// 	tab[1] = 4;
// 	tab[2] = 0;
// 	tab[3] = 3;
// 	tab[4] = 7;
// 	tab[5] = 5;
// 	tab[6] = 2;
// 	tab[7] = 9;
// 	tab[8] = 1;
// 	tab[9] = 6;
// 	printf("Input: ");
// 	ft_put_tab(tab, tab_size);
// 	printf("\n");
// 	ft_sort_int_tab(tab, tab_size);
// 	printf("Result:");
// 	ft_put_tab(tab, tab_size);
// 	printf("\n");
// 	free(tab);
// 	return (0);
// }

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

int	main(void)
{
	int	tab[4];

	tab[0] = 4;
	tab[1] = 1;
	tab[2] = 8;
	tab[3] = 2;
	ft_sort_int_tab(tab, 4);
	if (tab[0] == 1 && tab[1] == 2 && tab[2] == 4 && tab[3] == 8)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
	printf("\n");
	tab[0] = 0;
	ft_sort_int_tab(tab, 0);
	ft_put_tab(tab, 0);
	return (0);
}
