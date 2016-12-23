/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-erp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 22:21:57 by pvan-erp          #+#    #+#             */
/*   Updated: 2016/12/21 22:21:58 by pvan-erp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_digits_base(long n, unsigned int radix)
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

char				*ft_itoa_base(long n, unsigned int radix)
{
	const char		*base = "0123456789abcdef";
	char			*fresh;
	unsigned int	digits;

	if (n == 0)
		return ("0");
	if (radix < 2 || radix > 16)
		return ("undefined");
	if (radix == 10)
		return (ft_itoa(n));
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
