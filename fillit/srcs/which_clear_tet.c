/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_clear_tet.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 15:15:18 by nwang             #+#    #+#             */
/*   Updated: 2017/10/26 13:27:23 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		which_clear_tet(char *tet, char **new_g, int *yx)
{
	int y;
	int x;

	y = yx[0];
	x = yx[1];
	if (ft_strequ(tet, TET1))
		ft_cleartet1(new_g, x, y);
	if (ft_strequ(tet, TET2))
		ft_cleartet2(new_g, x, y);
	if (ft_strequ(tet, TET3))
		ft_cleartet3(new_g, x, y);
	if (ft_strequ(tet, TET4))
		ft_cleartet4(new_g, x, y);
	if (ft_strequ(tet, TET5))
		ft_cleartet5(new_g, x, y);
	if (ft_strequ(tet, TET6))
		ft_cleartet6(new_g, x, y);
	if (ft_strequ(tet, TET7))
		ft_cleartet7(new_g, x, y);
	if (ft_strequ(tet, TET8))
		ft_cleartet8(new_g, x, y);
	if (ft_strequ(tet, TET9))
		ft_cleartet9(new_g, x, y);
	return (which_clear_tet2(tet, new_g, yx, y));
}

int		which_clear_tet2(char *tet, char **new_g, int *yx, int y)
{
	int x;

	y = yx[0];
	x = yx[1];
	if (ft_strequ(tet, TET10))
		ft_cleartet10(new_g, x, y);
	if (ft_strequ(tet, TET11))
		ft_cleartet11(new_g, x, y);
	if (ft_strequ(tet, TET12))
		ft_cleartet12(new_g, x, y);
	if (ft_strequ(tet, TET13))
		ft_cleartet13(new_g, x, y);
	if (ft_strequ(tet, TET14))
		ft_cleartet14(new_g, x, y);
	if (ft_strequ(tet, TET15))
		ft_cleartet15(new_g, x, y);
	if (ft_strequ(tet, TET16))
		ft_cleartet16(new_g, x, y);
	if (ft_strequ(tet, TET17))
		ft_cleartet17(new_g, x, y);
	if (ft_strequ(tet, TET18))
		ft_cleartet18(new_g, x, y);
	if (ft_strequ(tet, TET21))
		ft_cleartet19(new_g, x, y);
	return (0);
}
