/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-erp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 20:05:15 by pvan-erp          #+#    #+#             */
/*   Updated: 2017/07/27 20:05:30 by pvan-erp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof_base(const char *str, const unsigned int radix)
{
	char	*lstr;
	double	nb;

	lstr = ft_strtolower(ft_strdup(str));
	nb = ft_basetof(lstr, "0123456789abcdefghijklmnopqrstuvwxyz", radix);
	free(lstr);
	return (nb);
}
