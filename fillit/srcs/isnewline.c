/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isnewline.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 17:34:52 by egreen            #+#    #+#             */
/*   Updated: 2017/10/26 17:36:43 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_remove_newline(char *str)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	new = NULL;
	new = ft_strnew(sizeof(s));
	while (s[i])
	{
		if (s[i] != '\n')
		{
			new[j] = s[i];
			j++;
		}
		i++;
	}
	return (new);
}
