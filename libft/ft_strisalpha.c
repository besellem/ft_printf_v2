/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:42:15 by besellem          #+#    #+#             */
/*   Updated: 2021/01/13 12:54:21 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Check if each characters of the string are alphabetic letters
*/

int	ft_strisalpha(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]) == 0)
			return (0);
		++i;
	}
	return (1);
}
