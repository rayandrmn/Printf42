/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:40:50 by rayderha          #+#    #+#             */
/*   Updated: 2024/02/02 19:41:44 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int base)
{
	int	ct;

	ct = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		return (ft_putnbr(n * (-1), base) + ++ct);
	}
	if (n >= base)
	{
		ct = ft_putnbr(n / base, base);
		return (ct + ft_putnbr(n % base, base));
	}
	return (ft_putchar(n + '0'));
}
