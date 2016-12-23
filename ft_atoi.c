/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-erp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 20:04:21 by pvan-erp          #+#    #+#             */
/*   Updated: 2016/09/30 01:55:10 by pvan-erp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int nb;
	int i;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb * sign);
}
