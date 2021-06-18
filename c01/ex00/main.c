/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 21:03:13 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/07 12:15:45 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;
	int	*ptr;

	ptr = &a;
	ft_ft(ptr);
	printf("%d \n", a);
	printf("%d \n", *ptr);
	return (0);
}
