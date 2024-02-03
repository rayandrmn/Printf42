#include "ft_printf.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = -1;
	const char *chaine = av[1];
	ft_printf("ft_printf : %X \n", -10);
	printf("printf : %X \n", -10);
	//printf("%d\n", printf("salut%s\n", chaine));	
	}

	return 0;
}
