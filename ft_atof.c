/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-erp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 20:04:38 by pvan-erp          #+#    #+#             */
/*   Updated: 2017/07/27 20:05:03 by pvan-erp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(const char *str)
{
	double	nb;
	int		i;
	int		sign;

	nb = 0;
	sign = 1;
	if (str)
	{
		i = 0;
		while (ft_isspace(str[i]))
			i++;
		if (str[i] == '-')
			sign = -1;
		if (str[i] == '+' || str[i] == '-')
			i++;
		nb = ft_atof_base(&str[i], 10);
	}
	return (nb * sign);
}
