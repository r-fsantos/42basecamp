/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_handlers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 22:34:24 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/14 00:26:15 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *c)
{
	int	count;

	count = 0;
	while (*c != 0)
	{
		c++;
		count++;
	}
	return (count);
}

int	filter(char *numbers, int *arr)
{
	int	buffer;
	int	count;
	int	i;

	i = 0;
	count = 0;
	buffer = 0;
	if (str_len(numbers) == 31)
	{
		while (count < str_len(numbers))
		{
			if (numbers[count] >= '1' && numbers[count] <= '4')
			{	
				buffer = numbers[count] - '0';
				if (numbers[count] != ' ')
					arr[i++] = buffer;
			}
			else
				return (-1);
			count += 2;
		}
	}
	else
		return (-1);
	return (1);
}
