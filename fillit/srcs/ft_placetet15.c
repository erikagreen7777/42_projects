/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placetet15.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 16:01:43 by nwang             #+#    #+#             */
/*   Updated: 2017/10/26 13:19:20 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checktet15(char **g, int *yx)
{
	int size;
	int y;
	int x;

	y = yx[0];
	x = yx[1];
	size = yx[2];
	if (ft_strlen(&g[0][x]) < 2)
		return (0);
	if (!(size - y >= 3))
		return (0);
	if (!(g[y][x] == '.'))
		return (0);
	y++;
	if (!(g[y][x] == '.'))
		return (0);
	y++;
	if (!(g[y][x] == '.'))
		return (0);
	x++;
	if (!(g[y][x] == '.'))
		return (0);
	return (1);
}

int		ft_placetet15(char **g, int *yx, char c)
{
	int y;
	int x;

	y = yx[0];
	x = yx[1];
	if (ft_checktet15(g, yx) == 0)
		return (0);
	g[y][x] = c;
	y++;
	g[y][x] = c;
	y++;
	g[y][x] = c;
	x++;
	g[y][x] = c;
	return (1);
}

void	ft_cleartet15(char **g, int x, int y)
{
	g[y][x] = '.';
	y++;
	g[y][x] = '.';
	y++;
	g[y][x] = '.';
	x++;
	g[y][x] = '.';
}
