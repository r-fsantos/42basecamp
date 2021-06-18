/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 13:22:53 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/11 14:09:14 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*str;
	char	*str1;
	char	tab[5];

	tab[0] = '0';
	tab[1] = '1';
	tab[2] = '2';
	tab[3] = '3';
	tab[4] = '\0';
	str = "0123456789";
	str1 = "abcdefghijklmnopqrstuvwxyz";
	ft_putstr(str);
	printf("\n");
	ft_putstr(str1);
	printf("\n");
	ft_putstr(tab);
	printf("\n");
	return (0);
}
