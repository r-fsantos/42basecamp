/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 01:15:02 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/08 01:33:18 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_addr_start;

	dest_addr_start = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dest_addr_start);
}
