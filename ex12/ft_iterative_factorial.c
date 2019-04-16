/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:26:41 by cuzureau          #+#    #+#             */
/*   Updated: 2016/11/03 18:17:43 by cuzureau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		res;

	i = nb;
	res = nb;
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 0)
		return (1);
	while (i > 1)
	{
		res = res * (i - 1);
		i--;
	}
	return (res);
}
