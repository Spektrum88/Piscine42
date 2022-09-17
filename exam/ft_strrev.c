#include <stdio.h>
char *ft_strrev(char *str)
{
    int i;
    int len;
    char c;

    i = 0;
    len = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    i--;
    while( len > i)
    {
        c = str[i];
        str[i] = str[len];
        str[len] = c;
        len++;
        i--;
    }
    return (str);
}
int main()
{
    char a[] = "reverse me";
    printf("%s\n", ft_strrev(a));
    return (0);
}

