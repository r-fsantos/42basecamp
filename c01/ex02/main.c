/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 21:41:14 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/05 21:51:20 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
	return ;
}

int	main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 42;
	b = 21;
	ptr_a = &a;
	ptr_b = &b;
	printf("Before: a = %d\n", a);
	printf("Before: b = %d\n", b);
	ft_swap(ptr_a, ptr_b);
	printf("After: a = %d\n", a);
	printf("After: b = %d\n", b);
	return (0);
}
