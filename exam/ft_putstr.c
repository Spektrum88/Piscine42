#include <unistd.h>
void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0x00)
    {
        i++;
    }
        write(1, str, i);
}

int main()
{
    ft_putstr("aaaaaaaa");
}