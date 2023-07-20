#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void ft_error(void)
{
	write(2, "Error", 6);
	exit(1);
}

int main()
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (i == j)
		ft_error();
	write(1, "Hello Word", 12);
	return (0);
}
