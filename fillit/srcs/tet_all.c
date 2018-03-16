/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tet_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 09:06:43 by egreen            #+#    #+#             */
/*   Updated: 2017/10/26 14:08:45 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tet_all(char *str, t_tet_frag *tetromino)
{
	char	**tet;
	char	**temp;
	int		j;
	int		k;

	j = 0;
	k = 0;
	if ((ft_ismod(ft_strlen(str), 16)) || (dothashthing(str) == 2))
		return (2);
	tet = ft_split(str);
	temp = ft_memalloc(sizeof(tet) * MAXTETS);
	tetromino->count = 0;
	while (tet[j])
	{
		temp[k] = ft_trimdots(tet[j]);
		if (ft_checktets(temp[k]) == 2)
			return (2);
		tetromino->count++;
		j++;
		k++;
	}
	temp[k] = NULL;
	tetromino->array = temp;
	return (0);
}
