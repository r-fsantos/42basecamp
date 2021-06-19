/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:28:19 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/17 15:36:43 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	**null;
	int	**range0;
	int	**range1;
	int	addr0;
	int	*addr;
	int	*addr1;

	null = NULL;
	range0 = 0;
	addr = &addr0;
	addr1 = &addr0;
	range0 = &addr1;
	range1 = &addr;
	printf("expected: -1 got: %d\n", ft_ultimate_range(null, 2, 5));

	printf("addr range0: %p\n", range0);
	printf("expected:  0 got:  %d\n", ft_ultimate_range(range0, 5, 2));
	printf("addr range0: %p\n", range0);
	printf("addr range1: %p\n", range1);
	printf("expected:  3 got:  %d\n", ft_ultimate_range(range1, 2, 5));
	printf("addr range1: %p\n", range1);
	printf("%d\n", range1[0][0]);
	printf("%d\n", range1[0][1]);
	printf("%d\n", range1[0][2]);
	// free(range1);
	// free(range0);
	return (0);
}
