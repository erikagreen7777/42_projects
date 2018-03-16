/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 17:11:34 by egreen            #+#    #+#             */
/*   Updated: 2017/10/27 13:24:09 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int			fd;
	int			i;
	char		buf[601];
	t_tet_frag	*tetromino;

	tetromino = ft_memalloc(sizeof(t_tet_frag));
	i = 0;
	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
		{
			write(1, "error\n", 6);
			return (0);
		}
		ft_bzero(buf, 601);
		read(fd, buf, 600);
		validswitch(buf, tetromino);
		ft_putchar('\n');
		free(tetromino);
		close(fd);
	}
	else
		write(1, "usage: ./fillit [test file]\n", 28);
	return (0);
}
