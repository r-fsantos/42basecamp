/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfelicio <rfelicio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 12:02:55 by rfelicio          #+#    #+#             */
/*   Updated: 2021/06/14 18:38:30 by rfelicio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_get_white_spaces(char *str);
int	ft_atoi(char *str);
int	ft_get_nbrsignal(char *str);
int	ft_chartoint(char *str);

int	main(void)
{
	char	*str_neg_nbr;
	char	*str_pos_nbr;
	char	*str_chartoint;
	char	*str_no_chartoint;
	char	*str_str_num_char;

	str_neg_nbr = "\t  -+1234";
	str_pos_nbr = "\t' '\f'-+-1234";
	str_chartoint = "12345abcdef";
	str_no_chartoint = "abcdef12345";
	str_str_num_char = " \n \t\f\r \v -1234b67asd"; 

	printf("STDLIB atoi: %d\n", atoi(str_str_num_char));

	// testing white spaces 
	printf("%s\n", str_neg_nbr);
	str_neg_nbr += ft_get_white_spaces(str_neg_nbr);
	printf("%s\n", str_neg_nbr);

	// testing nbr signal
	printf("Expected: -1     Got: %d\n", ft_get_nbrsignal(str_neg_nbr));
	printf("Expected:  1     Got:  %d\n", ft_get_nbrsignal(str_pos_nbr));

	// testing char to int 
	printf("Expected:  12345 Got: %d\n", ft_atoi(str_chartoint));
	printf("Expected:  0     Got: %d\n", ft_atoi(str_no_chartoint));
	printf("Expected:  -1234 Got: %d\n", ft_atoi(str_str_num_char));
	return (0);
}

/* ft_get_white_spaces
** -------------------
** Checks for C and POSIX white-space chars. These are:
** space            (' '), 
** form-feed        ('\f'), 
** newline          ('\n'),
** carriage return  ('\r'),  
** horizontal tab   ('\t') and 
** vertical tab     ('\v').
** 
** It returns i for the number of white spaces founded.
*/

/* ft_get_nbrsignal
** ----------------
** Gets the signal of an array by simply
** checking if there is '-' on it an then
** multiply the signal by -1;
**
** returns +1 or -1
*/