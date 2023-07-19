#include <stdio.h>
#include <unistd.h>


static int	ft_cont(char const *s, char c)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (*s)
	{
		if (*s != c && cont == 0)
		{
			cont = 1;
			i++;
		}
		else if (*s == c)
			cont = 0;
		s++;
	}
	return (i);
}

int main()
{
	char	test[]="Hola undo mundial";
	int i;

	i = ft_cont(test, ' ');
	printf("Palabras = %d", i);
	return 0;
}

