/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 08:45:29 by egreen            #+#    #+#             */
/*   Updated: 2017/10/26 13:47:58 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_split(char *str)
{
	size_t	len;
	size_t	i;
	int		j;
	char	**fragments;

	len = ft_strlen(str);
	i = 0;
	j = 0;
	fragments = (char **)ft_memalloc(sizeof(char *) * 27);
	while (len > 0)
	{
		fragments[i] = ft_strnew(16);
		ft_strncpy(fragments[i], &str[j], 16);
		len -= 16;
		i++;
		j += 16;
	}
	fragments[i] = NULL;
	return (fragments);
}
