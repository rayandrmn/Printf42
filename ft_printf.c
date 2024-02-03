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
#include <stdio.h>
#include <unistd.h>
#include <time.h>
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
	while (str[i])
		i++;
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
	else if (str[i + 1] == 'x')
	{
		return (ft_putstr(va_arg(ap, char *)));
	}
	else if (str[i + 1] == 'p')
	{
		return (ft_itoa(va_arg(ap, unsigned long long int), "0123456789abcdef"));
	}
	else if (str[i + 1] == 'd')
	{
		int	i;
		int	n;
		
		n = va_arg(ap, int);
		i = n;
		ft_putnbr(n);
		return (malloc_size(i));
	}
	else if (str[i + 1] == 'i')
	{       
		int     i;
		int     n;

                n = va_arg(ap, int);
                i = n;
                ft_putnbr(n);
                return (malloc_size(i));
	}
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
			//printf("count : %d\n", count);
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

#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		const char *chaine = av[1];
	printf("le printf return : %d \n ", printf("%d", 0));
	printf("le nombre return : %d", ft_printf("%d", 0));
	}

	return 0;
}
