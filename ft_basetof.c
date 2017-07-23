/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basetof.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-erp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 23:23:18 by pvan-erp          #+#    #+#             */
/*   Updated: 2017/07/22 23:23:22 by pvan-erp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_basetof(char *str, const char *base, const unsigned int radix)
{
	double	nb;
	double	frac;

	nb = 0;
	frac = 1;
	if (radix > 16)
		return (0);
	while (ft_isspace(*str))
		str++;
	while (ft_strchr(base, *str) && ft_strchr(base, *str) - base < radix)
	{
		nb *= radix;
		nb += ft_strchr(base, *str) - base;
		str++;
	}
	if (*str == '.')
		str++;
	while (ft_strchr(base, *str) && ft_strchr(base, *str) - base < radix)
	{
		frac /= radix;
		nb += (ft_strchr(base, *str) - base) * frac;
		str++;
	}
	return (nb);
}
