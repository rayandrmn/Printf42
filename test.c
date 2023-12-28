#include "ft_printf.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		const char *chaine = av[1];
	ft_printf("acoucou %s !!!", chaine);
	//printf("%d\n", ft_printf("salut%s\n", chaine));
	//printf("%d\n", printf("salut%s\n", chaine));	
	}

	return 0;
}