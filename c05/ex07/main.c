/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:35:28 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/15 19:33:50 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("expected: 11 got: %d\n", ft_find_next_prime(11));
	printf("expected: 13 got: %d\n", ft_find_next_prime(12));
	printf("expected:  2 got: %d\n", ft_find_next_prime(0));
	printf("expected:  2 got: %d\n", ft_find_next_prime(1));
	printf("expected:  2 got: %d\n", ft_find_next_prime(2));
	printf("expected:  3 got: %d\n", ft_find_next_prime(3));
	printf("expected:  5 got: %d\n", ft_find_next_prime(4));
	printf("expected:  7 got: %d\n", ft_find_next_prime(7));
	
	return (0);
}