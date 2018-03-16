/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 09:05:28 by egreen            #+#    #+#             */
/*   Updated: 2017/10/25 09:05:56 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_grid(char **grid, int size)
{
	int		row;
	int		col;

	col = -1;
	while (++col < size)
	{
		row = -1;
		while (++row < size)
			ft_putchar(grid[col][row]);
		if (col + 1 < size)
			ft_putchar('\n');
	}
}
