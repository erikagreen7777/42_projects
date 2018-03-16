/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tet_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 09:09:34 by egreen            #+#    #+#             */
/*   Updated: 2017/10/26 17:09:51 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tet_length(char *str)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	i = 20;
	if (len > 546 || len < 19)
		return (2);
	if ((str[len - 1]) == '\n' && (str[len - 2] == '\n'))
		return (2);
	while (i < len)
	{
		if (str[i] != '\n')
			return (2);
		if (str[i + 1] == '\n')
			return (2);
		i += 21;
	}
	if ((str[0] != '.') && (str[0] != '#'))
		return (2);
	return (0);
}
