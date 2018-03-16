/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_newline.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 08:39:16 by egreen            #+#    #+#             */
/*   Updated: 2017/10/25 08:43:18 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_remove_newline(char *str)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	new = ft_strnew(ft_strlen(str));
	while (str[i])
	{
		if (str[i] != '\n')
		{
			new[j] = str[i];
			j++;
		}
		i++;
	}
	return (new);
}
