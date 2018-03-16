/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placetet1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 16:01:43 by nwang             #+#    #+#             */
/*   Updated: 2017/10/26 16:36:13 by nwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_checktet1(char **g, int *yx)
{
	int i;
	int y;
	int x;

	y = yx[0];
	x = yx[1];
	i = 0;
	if (ft_strlen(&g[y][x]) < 4)
		return (0);
	while (i < 4)
	{
		if (!(g[y][x] == '.'))
			return (0);
		x++;
		i++;
	}
	return (1);
}

int		ft_placetet1(char **g, int *yx, char c)
{
	int i;
	int y;
	int x;

	y = yx[0];
	x = yx[1];
	i = 0;
	if (ft_checktet1(g, yx) == 0)
		return (0);
	while (i < 4)
	{
		g[y][x] = c;
		x++;
		i++;
	}
	return (1);
}

void	ft_cleartet1(char **g, int x, int y)
{
	int i;

	i = 0;
	while (i < 4)
	{
		g[y][x] = '.';
		x++;
		i++;
	}
}
