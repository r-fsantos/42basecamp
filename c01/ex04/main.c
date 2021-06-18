/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 22:40:21 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/05 22:52:03 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp1;
	int	tmp2;

	tmp1 = *a;
	tmp2 = *b;
	*a = tmp1 / tmp2;
	*b = tmp1 % tmp2;
	return ;
}

int	main(void)
{
	int	a;
	int	b;
	int	*ptr;
	int	*ptr2;

	a = 42;
	b = 10;
	ptr = &a;
	ptr2 = &b;
	printf("Expected a / b: %d\n", a / b);
	printf("Expected a %c b: %d\n", '%', a % b);
	ft_ultimate_div_mod(ptr, ptr2);
	printf("Received a / b: %d\n", *ptr);
	printf("Received a %c b: %d\n", '%', *ptr2);
	return (0);
}
