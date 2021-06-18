/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 00:07:12 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/08 01:37:28 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);

int	main(void)
{
	char	*src;
	char	*dest;
	char	*strcpy;

	src = "Don't panic :)";
	dest = malloc(ft_strlen(src));
	strcpy = ft_strcpy(dest, src);
	printf("src:    %s\n", src);
	printf("dest:   %s\n", dest);
	printf("strcpy: %s\n", strcpy);
	printf("\n");
	free(dest);
	src = "";
	dest = malloc(ft_strlen(src));
	strcpy = ft_strcpy(dest, src);
	printf("src:    %s\n", src);
	printf("dest:   %s\n", dest);
	printf("strcpy: %s\n", strcpy);
	free(dest);
	return (0);
}

int	ft_strlen(char *str)
{
	int	char_nbr;

	char_nbr = 0;
	while (str[char_nbr] != '\0')
		char_nbr++;
	return (char_nbr);
}
