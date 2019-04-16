/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:52:52 by cuzureau          #+#    #+#             */
/*   Updated: 2016/11/05 14:34:48 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*dest;
	int		i;

	i = 0;
	dest = NULL;
	if (min >= max)
		return (dest);
	else
		dest = (int *)malloc(sizeof(int) * (max - min));
	while (i < (max - min))
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
