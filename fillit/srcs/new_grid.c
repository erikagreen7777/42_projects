/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_grid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 09:04:08 by egreen            #+#    #+#             */
/*   Updated: 2017/10/25 09:05:01 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**new_grid(int size)
{
	int		row;
	int		col;
	char	**grid;

	grid = (char **)malloc(sizeof(char *) * size);
	col = -1;
	while (++col < size)
	{
		grid[col] = ft_strnew(size);
		row = -1;
		while (++row < size)
			grid[col][row] = '.';
	}
	return (grid);
}
