#include <stdio.h>
char *ft_strrev(char *str)
{
    int i;
    int len;
    char c;

    i = 0;
    len = 0;
    while(str[len] != '\0')
    {
        len++;
    }
    len--;
    while( len > i)
    {
        c = str[len];
        str[len] = str[i];
        str[i] = c;
        i++;
        len--;
    }
    return (str);
}
int main()
{
    char a[] = "reverse me";
    printf("%s\n", ft_strrev(a));
    return (0);
}

