/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 01:59:52 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/15 19:56:32 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	// int i = 0;

	// while(i < 15)
	// {
	// 	printf("%d, ", ft_fibonacci(i));
	// 	i++;
	// }
	printf("%d\n", ft_fibonacci(15));
	return (0);
}