/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 14:43:09 by egreen            #+#    #+#             */
/*   Updated: 2017/11/17 12:27:21 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*t;
	size_t	i;

	i = 0;
	if ((t = malloc(size)) == NULL)
		return (NULL);
	while (i < size)
	{
		t[i] = 0;
		i++;
	}
	return (t);
}
