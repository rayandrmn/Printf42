/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:41:51 by rayderha          #+#    #+#             */
/*   Updated: 2024/02/03 17:41:52 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char *base)
{
	int	ct;
	char	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(char) * 16 + 1);
	ct = 0;
	while (n > 0)
	{
		tab[i++] = base[n % 16];
		n /= 16;
	}
	tab[i] = '\0';
	while (i >= 0)
	{
		ct += ft_putchar(tab[i--]);
	}
	free(tab);
	return (ct);
}
