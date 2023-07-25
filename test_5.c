#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_check_nums(char  *num)
{
    int     i;
    int     j;
    int     k;

    i = 0;
    while (num[i] != '\0')
    {
        j = i + 1;
        k = i + 1;
        while (num[i] && num[j] &&  num[k])
        {
            if (num[i] > num[k])
                return (1);
            if (num[i] == num[j])
                return (0);
            k++;
            j++;
        }
        i++;
    }
    return (0);
}

int main()
{
    char    str[]="1263445";

    if (!ft_check_nums(str))
        printf("Deberia dar exit");
    else
        printf("seguiria con la funcion");
    return(0);
}
