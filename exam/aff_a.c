#include <unistd.h>
int ft_strlen(char *str)
{
    int len;

    len = 0;
    while(str[len]!= 0x00)
    {
        len++;
    }
    return(len);
}

int main(int ac, char **av)
{
    int i;
    
    i=0;
    if (ac == 2)
    {   
        i = ft_strlen(av[1]);
        while (i--)
        {
            write(1, &av[1][i], 1);
        }

    }
    write(1,"\n", 1);
    return(0);
}