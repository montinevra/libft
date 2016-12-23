/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-erp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 13:31:42 by pvan-erp          #+#    #+#             */
/*   Updated: 2016/10/09 20:36:03 by pvan-erp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*m;
	size_t	i;

	i = 0;
	if ((m = (char *)malloc(size)))
	{
		ft_bzero(m, size);
		return ((void *)m);
	}
	return (0);
}
