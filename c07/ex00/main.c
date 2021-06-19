/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:49:19 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/18 20:58:29 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);
int		ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*str;
	char	*str_copy;
	char	*cpy0;
	char	*cpy1;
	char	*cpy_null;
	
	str = "Teste0";
	cpy0 = ft_strdup("Teste0");
	printf("ft_strdup expected 0 got %d\n", ft_strcmp(cpy0, "Teste0"));
	free(cpy0);
	cpy1 = strdup("Teste0");
	printf("strdup expected 0 got %d\n", ft_strcmp(cpy1, "Teste0"));
	
	printf("cpy0 size of: %lu\n", sizeof(cpy0));
	printf("cpy1 size of: %lu\n", sizeof(cpy1));
	printf("Teste0 size of: %lu\n", sizeof(str));
	free(cpy1);
	cpy_null = ft_strdup("");
	printf("expected NULL got %d\n", cpy_null[0]);
	free(cpy_null);
	
	cpy0 = ft_strdup("");
	printf("expected NULL got %s\n", cpy0);
	free(cpy0);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}