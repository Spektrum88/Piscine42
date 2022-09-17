#include <stdio.h>
int ft_is_num(char *str)
{
    int i;

    i = 0;
    while(str[i] != 0x00 && i < str[i])
    {
        if (str[i] >= '0' && str[i] <= '9' || str[i] == '!')
        {
            i++;
        }
        else
            return (0);
    }
    return (1);
}
int main()
{
    printf("%d\n", ft_is_num("1235"));
    return (0);
}