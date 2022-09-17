#include <stdio.h>
int ft_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0x00 && i < str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            i++;
        }   
        else 
            return(0);
    }
    return (1);
}
int main()
{
    printf("%d\n",ft_is_alpha("ana41ana"));
}