/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:10:55 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/15 20:04:18 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("expected: 4 got: %d\n", ft_sqrt(16));
	printf("expected: 0 got: %d\n", ft_sqrt(13));
	printf("expected: 0 got: %d\n", ft_sqrt(0));
	printf("expected: 0 got: %d\n", ft_sqrt(-1));
	printf("expected: 9 got: %d\n", ft_sqrt(81));
	printf("expected: 5 got: %d\n", ft_sqrt(25));
	return (0);
}
