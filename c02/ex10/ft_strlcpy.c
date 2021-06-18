/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 14:19:16 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/09 18:01:14 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	char_nbr_copied;

	src_len = 0;
	char_nbr_copied = 0;
	while (*src != '\0' && char_nbr_copied < size)
	{
		*dest++ = *src++;
		char_nbr_copied++;
	}
	src_len = char_nbr_copied;
	if (src_len < size)
	{
		*dest = '\0';
	}
	else
	{
		*(dest - 1) = '\0';
	}
	while (*src != '\0')
	{
		src_len++;
		src++;
	}
	return (src_len);
}
