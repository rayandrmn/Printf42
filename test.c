#include "ft_printf.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = -1;
	const char *chaine = av[1];
	printf("le nombre ft : %d \n",ft_printf("printf : %%, %c, %d, %i, %p, %X, %x, %s    \n", 'c', -42, 42, &chaine, 36, 36, "salut"));
	printf("le nombre ft : %d \n",printf("printf : %%, %c, %d, %i, %p, %X, %x, %s    \n", 'c', -42, 42, &chaine, 36, 36, "salut"));
	//printf("\n%d\n", ft_printf("salut%p\n", &chaine));
	//printf("\n%d\n", printf("salut%p\n", &chaine));	
	}

	return 0;
}
