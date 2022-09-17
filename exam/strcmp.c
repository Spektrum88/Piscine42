#include <strings.h>
#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{

    int i;
    i = 0;
    while((s1[i] != 0x00 && s2[i] != 0x00) && s1[i] == s2[i])
    {
        i++;
    }
    return((unsigned char)s1[i] - (unsigned char)s2[i]);
}   
int main()
{
    char a[] = "abc";
    char b[] = "abc";
    printf("%d\n", ft_strcmp(a, b));
    printf("%d\n", strcmp( a, b));
    return (0);
}