/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-erp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 17:05:11 by pvan-erp          #+#    #+#             */
/*   Updated: 2017/03/09 17:16:14 by pvan-erp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	for use with pointer arrays
*/

size_t	ft_arrlen(const void *a)
{
	size_t i;

	i = 0;
	while (*((char **)a + i))
		i++;
	return (i);
}
