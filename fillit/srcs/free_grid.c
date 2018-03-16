/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 17:01:54 by egreen            #+#    #+#             */
/*   Updated: 2017/10/27 17:02:30 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_grid(char **grid, int size)
{
	int		row;

	row = -1;
	while (++row < size)
		free(grid[row]);
	free(grid);
}
