/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:54:20 by rayderha          #+#    #+#             */
/*   Updated: 2024/01/26 13:34:21 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	if (i > 0)
		write(1, str, i);
	return (i);
}

int	checksign(const char *str, int i, va_list ap)
{
	if (str[i + 1] == 'c')
	{
		ft_putchar(va_arg(ap, int));
		return (1);
	}
	else if (str[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (str[i + 1] == 'p')
		return (ft_itoa(va_arg(ap, unsigned long long int),
				"0123456789abcdef"));
	else if (str[i + 1] == 'd')
		return (ft_putnbr(va_arg(ap, int), 10));
	else if (str[i + 1] == 'i')
		return (ft_putnbr(va_arg(ap, int), 10));
	else if (str[i + 1] == 'u')
		return (ft_putnbr_unsigned(va_arg(ap, unsigned int), 10));
	else if (str[i + 1] == 'x')
		return (ft_puthexa(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (str[i + 1] == 'X')
		return (ft_puthexa(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else
		return (ft_putchar(str[i + 1]));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += checksign(str, i, ap);
			i += 2;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
			count++;
		}
	}
	va_end(ap);
	return (count);
}
