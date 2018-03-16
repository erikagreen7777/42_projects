/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 15:45:24 by nwang             #+#    #+#             */
/*   Updated: 2017/10/26 17:16:27 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		solver(char **grid, t_tet_frag *tetromino, int tetcount, int size)
{
	int		yx[3];

	yx[2] = size;
	yx[0] = 0;
	if (tetromino->array[tetcount] == NULL)
		return (1);
	while (yx[0] < size)
	{
		yx[1] = 0;
		while (yx[1] < size)
		{
			if (which_tet(tetromino->array[tetcount], grid, yx, ALPH[tetcount]))
			{
				if (solver(grid, tetromino, tetcount + 1, size))
					return (1);
				which_clear_tet(tetromino->array[tetcount], grid, yx);
			}
			yx[1]++;
		}
		yx[0]++;
	}
	return (0);
}
