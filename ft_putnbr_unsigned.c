/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:45:59 by rayderha          #+#    #+#             */
/*   Updated: 2024/02/03 19:46:00 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n, unsigned int base)
{
	int	ct;

	ct = 0;
	if (n >= base)
	{
		ct = ft_putnbr_unsigned(n / base, base);
		return (ct + ft_putnbr_unsigned(n % base, base));
	}
	return (ft_putchar(n + '0'));
}
