/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 13:15:14 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/14 17:13:03 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

void	ft_strlen_test(char *str)
{
	int	size;
	int	ft_size;

	size = strlen(str);
	ft_size = ft_strlen(str);
	if (size != ft_size)
		printf("> KO. expected: %d, got: %d\n", size, ft_size);
	else
		printf("> OK. result: %d\n", ft_size);
}

int	main(void)
{
	char	*str;

	str = "";
	ft_strlen_test(str);
	str = "4444";
	ft_strlen_test(str);
	str = "abcdefghijklmnopqrstuvwxyz";
	ft_strlen_test(str);
	return (0);
}
