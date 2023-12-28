/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayderha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 20:40:12 by rayderha          #+#    #+#             */
/*   Updated: 2023/12/08 11:45:16 by rayderha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FT_PRINTF
# define FT_PRINTF

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>



int	ft_printf(const char *str, ...);
char	*ft_itoa(int	n);


#endif
