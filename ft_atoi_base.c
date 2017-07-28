/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-erp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 17:09:21 by pvan-erp          #+#    #+#             */
/*   Updated: 2017/03/14 20:55:22 by pvan-erp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_atoi_base(const char *str, const unsigned int radix)
{
	char	*lstr;
	int		nb;

	lstr = ft_strtolower(ft_strdup(str));
	nb = ft_basetoi(lstr, "0123456789abcdefghijklmnopqrstuvwxyz", radix);
	free(lstr);
	return (nb);
}
