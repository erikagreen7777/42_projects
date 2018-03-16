/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egreen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 12:44:16 by egreen            #+#    #+#             */
/*   Updated: 2017/12/02 12:44:17 by egreen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		cs1;
	int		cs2;
	char	*temp;

	if (!s1 || !s2)
		return (NULL);
	cs1 = ft_strlen(s1);
	cs2 = ft_strlen(s2);
	temp = (char *)malloc(sizeof(*temp) * (ft_strlen(s1) + (ft_strlen(s2))));
	if (!temp)
		return (NULL);
	ft_strcpy(temp, s1);
	ft_strcat(temp, s2);
	return (temp);
}
