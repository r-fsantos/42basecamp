/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:16:45 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/08 18:16:46 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str_empty;
	char	*str_akward;
	char	*str_uppercase;
	char	*str_not_all_uppercase;
	char	*str_not_uppercase_at_all;

	str_empty = "";
	str_uppercase = "ABCDEFGHI";
	str_not_all_uppercase = "abcABC";
	str_akward = "123˜`$&ˆ\%(&][!'{>,<";
	str_not_uppercase_at_all = "abcdefghi";
	printf("Expected: 1 Result: %d\n", ft_str_is_uppercase(str_empty));
	printf("Expected: 1 Result: %d\n", ft_str_is_uppercase(str_uppercase));
	printf("Expected: 0 Result: %d\n", ft_str_is_uppercase(str_akward));
	printf("Expected: 0 Result: %d\n", ft_str_is_uppercase(str_not_all_uppercase));
	printf("Expected: 0 Result: %d\n", ft_str_is_uppercase(str_not_uppercase_at_all));
	return (0);
}
