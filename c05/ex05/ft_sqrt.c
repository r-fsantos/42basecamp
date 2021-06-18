/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:04:02 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/14 19:23:19 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	nbr;
	unsigned int	step;
	unsigned int	nb_root;

	step = 1;
	nbr = nb;
	nb_root = 0;
	nb = (unsigned int)nb;
	while (nb > 0)
	{
		nb -= step;
		step += 2;
		nb_root++;
	}
	if (nbr != (nb_root * nb_root))
	{
		return (0);
	}
	return (nb_root);
}
