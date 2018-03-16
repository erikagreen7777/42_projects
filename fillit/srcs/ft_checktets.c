/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktets.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 13:28:43 by egreen            #+#    #+#             */
/*   Updated: 2017/10/27 10:01:20 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checktets(char *s)
{
	if (ft_strequ(s, TET19) || (ft_strequ(s, TET20)))
		return (2);
	if (!(ft_strequ(s, TET1)) && (!(ft_strequ(s, TET2))) && \
			(!(ft_strequ(s, TET3))) && (!(ft_strequ(s, TET4))) &&\
			(!(ft_strequ(s, TET5))) && (!(ft_strequ(s, TET6))) &&\
			(!(ft_strequ(s, TET7))) && (!(ft_strequ(s, TET8))) &&\
			(!(ft_strequ(s, TET9))) && (!(ft_strequ(s, TET10))) &&\
			(!(ft_strequ(s, TET11))) && (!(ft_strequ(s, TET12))) &&\
			(!(ft_strequ(s, TET13))) && (!(ft_strequ(s, TET14))) &&\
			(!(ft_strequ(s, TET15))) && (!(ft_strequ(s, TET16))) &&\
			(!(ft_strequ(s, TET17))) && (!(ft_strequ(s, TET18))) &&\
			(!ft_strequ(s, TET21)))
		return (2);
	return (0);
}
