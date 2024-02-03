/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:40:14 by rayderha          #+#    #+#             */
/*   Updated: 2024/01/26 13:42:40 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"
#include <stdio.h>

int		ft_itoa(long long unsigned int n, char	*base)
{
	int	ct;
	char 	*tab;
	int	i;

	tab = malloc(sizeof(char) * 16 + 1);
	i = 0;
	ct = 0;
	ct = ct + ft_putstr("Ox");
	while (n > 0)
	{
		tab[i++] = base[n % 16];
		n /= 16;
	}
	while (i >= 0)
	{
		ct += ft_putchar(tab[i--]);
	}
	return (ct);
}
