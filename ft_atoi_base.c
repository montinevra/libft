/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-erp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 17:09:21 by pvan-erp          #+#    #+#             */
/*   Updated: 2017/01/27 22:25:07 by pvan-erp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_atoi_base(const char *str, const unsigned int radix)
{
	const char		*base = "0123456789abcdef";
	unsigned int	nb;
	size_t			i;

	i = 0;
	nb = 0;
	if (radix > 16)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	while (str[i] != '\0' && ft_strchr(base, str[i]) &&
			ft_strchr(base, str[i]) - base < radix)
	{
		nb *= radix;
		nb += ft_strchr(base, str[i]) - base;
		i++;
	}
	return (nb);
}
