/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 20:40:12 by rayderha          #+#    #+#             */
/*   Updated: 2024/01/26 13:33:03 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FT_PRINTF
# define FT_PRINTF

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct compteur
{
	int	i;

}	compteur;

int	ft_printf(const char *str, ...);
int	ft_putstr(const char *str);
int	ft_putchar(char c);
int	ft_itoa(long long unsigned int n, char *base);
int	ft_putnbr(int n, int base);
int	malloc_size(int n);
int	ft_puthexa(unsigned int n, char *base);

#endif
