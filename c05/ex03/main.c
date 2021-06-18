/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:45:55 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/15 01:48:26 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{	
	printf("nb:  %d  power:  %d expected:  1  got:   %d\n", 0, 0, ft_recursive_power(0, 0));
	printf("nb:  %d  power: %d expected:  0  got:   %d\n", 0, -1, ft_recursive_power(0, -1));
	printf("nb:  %d  power: %d expected:  0  got:   %d\n", 1, -1, ft_recursive_power(1, -1));
	printf("nb: %d  power:  %d expected: -1  got:  %d\n", -1, 1, ft_recursive_power(-1, 1));
	printf("nb:  %d  power:  %d expected:  2  got:   %d\n", 2, 1, ft_recursive_power(2, 1));
	printf("nb: %d  power:  %d expected: -2  got:  %d\n", -2, 1, ft_recursive_power(-2, 1));
	printf("nb:  %d  power:  %d expected:  4  got:   %d\n", 2, 2, ft_recursive_power(2, 2));
	printf("nb: %d  power:  %d expected:  4  got:   %d\n", -2, 2, ft_recursive_power(-2, 2));
	printf("nb:  %d  power:  %d expected:  8  got:   %d\n", 2, 3, ft_recursive_power(2, 3));
	printf("nb: %d  power:  %d expected: -8  got:  %d\n", -2, 3, ft_recursive_power(-2, 3));
	printf("nb:  %d  power:  %d expected: 16  got:  %d\n", 2, 4, ft_recursive_power(2, 4));
	printf("nb: %d  power:  %d expected: 16  got:  %d\n", -2, 4, ft_recursive_power(-2, 4));

	return (0);
}
