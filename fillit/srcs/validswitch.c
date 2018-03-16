/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validswitch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 08:23:20 by egreen            #+#    #+#             */
/*   Updated: 2017/10/27 17:01:34 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	*ft_putstr2(char *s)
{
	ft_putstr(s);
	return (s);
}

int			validswitch(char *buf, t_tet_frag *tetromino)
{
	size_t	i;
	char	*str;
	char	**new_g;
	int		tetcount;

	tetcount = 0;
	i = 20;
	str = buf;
	if ((tet_length(str) == 2) && (ft_putstr2("error")))
		return (0);
	str = ft_remove_newline(str);
	if ((tet_all(str, tetromino) == 2) && (ft_putstr2("error")))
		return (0);
	tetromino->size = MINGRID;
	new_g = new_grid(tetromino->size);
	while (!solver(new_g, tetromino, tetcount, tetromino->size))
	{
		free_grid(new_g, tetromino->size);
		new_g = new_grid(++tetromino->size);
	}
	print_grid(new_g, tetromino->size);
	free_grid(new_g, tetromino->size);
	return (0);
}
