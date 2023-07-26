#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_check_dup(char   *num)
{
    int     i;
    int     j;
    char    *aux;

    i = 0;
    aux = num;
    while (num[i] != '\0')
    {
        j = i + 1;
        while (aux[j])
        {
            if (aux[j] == num[i])
                return(1);
            j++;
        }
        i++;
    }
    return (0);
}

int ft_check_sort(char  *num)
{
    int     i;
    int     j;
    char    *aux;

    i = 0;
    j = 1;
    aux = num;
    while (aux[j] != '\0')
    {
        if (num[i] > aux[j])
            return (1);
        i++;
        j++;
    }
    return (0);
}

int main()
{
    char    str[]="15235";

    if (ft_check_dup(str) || !ft_check_sort(str))
        printf("Deberia dar exit");
    else
        printf("seguiria con la funcion");
    return(0);
}
