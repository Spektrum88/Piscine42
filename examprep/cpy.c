char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while( src[i] != 0x00)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0x00;
    return (dest);
}

#include <stdio.h>
int main()
{
    char src1[] = " 122345";
    char dest2[] = "";
    printf ("%s\n", ft_strcpy(dest2, src1));
    return (0);
}