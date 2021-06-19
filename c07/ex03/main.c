/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:24:41 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/18 17:43:18 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);

int	main(void)
{
	int		i;
	char	sep[] = ", ";
	char	*strs0[] = {"Renato", "Felicio", "dos", "Santos", "Junior"};
	char	*ret;
	int		size_strs0 = 5;
	int		offset;
	char	**strs;
	char	*res_str;

	i = 0;
	ret = ft_strjoin(size_strs0, strs0, sep);

	while (ret[i] != '\0')
		printf("%c", ret[i++]);
	printf("\n");

	ret = ft_strjoin(0, strs0, sep);
	printf("%s\n", ret);
	free(ret);
	printf("%s\n", ret);

	while (ret[i] != '\0')
		printf("%c", ret[i++]);
	printf("\n%d\n", i);

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 3)
	{
		strs[offset] = "abc";
		offset++;
	}
	res_str = ft_strjoin(3, strs, ", ");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	
	return (0);
}
