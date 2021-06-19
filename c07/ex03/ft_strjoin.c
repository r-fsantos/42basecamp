/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:16:04 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/18 15:17:47 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_total_str_len(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*str;
	char	*sep_start_addr;
	char	*str_start_addr;

	str = malloc(ft_total_str_len(size, strs, sep));
	str_start_addr = str;
	if (str == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			*str++ = strs[i][j++];
		if (i++ < size - 1)
		{
			sep_start_addr = sep;
			while (*sep_start_addr != '\0')
				*str++ = *sep_start_addr++;
		}
	}
	*str = '\0';
	return (str_start_addr);
}

int	ft_total_str_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_size;

	if (size < 1)
		return (0);
	i = 0;
	total_size = 0;
	total_size += ft_strlen(sep) * (size - 1);
	while (i < size)
		total_size += ft_strlen(strs[i++]);
	total_size += 1;
	return (total_size);
}

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	return (str_len);
}
