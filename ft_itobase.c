/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itobase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-erp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 15:08:30 by pvan-erp          #+#    #+#             */
/*   Updated: 2017/01/11 21:49:03 by pvan-erp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_digits_base(unsigned long n, const unsigned int radix)
{
	unsigned int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		digits++;
		n /= radix;
	}
	return (digits);
}

/*
**	radix is the number of unique digits;
**	base is an array representing said digits
*/

char				*ft_itobase(unsigned long n, const unsigned int radix,
		const char *base)
{
	char			*fresh;
	unsigned int	digits;

	if (n == 0)
		return ("0");
	if (radix < 2 || radix > ft_strlen(base))
		return ("undefined");
	digits = get_digits_base(n, radix);
	if (!(fresh = ft_strnew(digits)))
		return (NULL);
	while (n)
	{
		fresh[--digits] = base[(n % radix)];
		n /= radix;
	}
	return (fresh);
}
