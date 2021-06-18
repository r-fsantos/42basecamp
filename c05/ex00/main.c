/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:26:42 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/15 19:41:33 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("expected: 0 got: %d\n", ft_iterative_factorial(-42));
	printf("expected: 1 got: %d\n", ft_iterative_factorial(0));
	printf("expected: 1 got: %d\n", ft_iterative_factorial(1));
	printf("expected: 2 got: %d\n", ft_iterative_factorial(2));
	printf("expected: 6 got: %d\n", ft_iterative_factorial(3));
	printf("expected: 24 got: %d\n", ft_iterative_factorial(4));
	printf("expected: 120 got: %d\n", ft_iterative_factorial(5));
	return (0);
}