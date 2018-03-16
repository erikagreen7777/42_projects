/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_tet.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 15:15:18 by nwang             #+#    #+#             */
/*   Updated: 2017/10/26 17:32:25 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		which_tet(char *tet, char **new_g, int *yx, char c)
{
	int		y;
	int		x;

	y = yx[0];
	x = yx[1];
	if (ft_strequ(tet, TET1))
		return (ft_placetet1(new_g, yx, c));
	if (ft_strequ(tet, TET2))
		return (ft_placetet2(new_g, yx, c));
	if (ft_strequ(tet, TET3))
		return (ft_placetet3(new_g, yx, c));
	if (ft_strequ(tet, TET4))
		return (ft_placetet4(new_g, yx, c));
	if (ft_strequ(tet, TET5))
		return (ft_placetet5(new_g, yx, c));
	if (ft_strequ(tet, TET6))
		return (ft_placetet6(new_g, yx, c));
	if (ft_strequ(tet, TET7))
		return (ft_placetet7(new_g, yx, c));
	if (ft_strequ(tet, TET8))
		return (ft_placetet8(new_g, yx, c));
	if (ft_strequ(tet, TET9))
		return (ft_placetet9(new_g, yx, c));
	return (which_tet2(tet, new_g, yx, c));
}

int		which_tet2(char *tet, char **new_g, int *yx, char c)
{
	if (ft_strequ(tet, TET10))
		return (ft_placetet10(new_g, yx, c));
	if (ft_strequ(tet, TET11))
		return (ft_placetet11(new_g, yx, c));
	if (ft_strequ(tet, TET12))
		return (ft_placetet12(new_g, yx, c));
	if (ft_strequ(tet, TET13))
		return (ft_placetet13(new_g, yx, c));
	if (ft_strequ(tet, TET14))
		return (ft_placetet14(new_g, yx, c));
	if (ft_strequ(tet, TET15))
		return (ft_placetet15(new_g, yx, c));
	if (ft_strequ(tet, TET16))
		return (ft_placetet16(new_g, yx, c));
	if (ft_strequ(tet, TET17))
		return (ft_placetet17(new_g, yx, c));
	if (ft_strequ(tet, TET18))
		return (ft_placetet18(new_g, yx, c));
	if (ft_strequ(tet, TET21))
		return (ft_placetet19(new_g, yx, c));
	return (0);
}
