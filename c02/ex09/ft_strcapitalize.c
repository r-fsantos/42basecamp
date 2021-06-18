/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:47:01 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/16 23:13:07 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*str_start_addr;

	str_start_addr = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str_start_addr);
}

int	ft_is_alphanum(char	c)
{
	int	is_nbr;
	int	is_letter;

	is_nbr = 1;
	is_letter = 1;
	if (c < '0' || c > '9')
		is_nbr = 0;
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		is_letter = 0;
	if (is_nbr || is_letter)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		capitalize;
	char	*str_addr_start;

	i = 0;
	str_addr_start = str;
	str = ft_strlowcase(str);
	capitalize = 1;
	while (str[i] != '\0')
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		capitalize = !ft_is_alphanum(str[i]);
		i++;
	}
	return (str_addr_start);
}
