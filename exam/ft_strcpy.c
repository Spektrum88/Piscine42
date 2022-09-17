#include <stdio.h>
#include <strings.h>
char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
int main()
{
    char dest[] = "source";
    char src[] = "akja";
    printf("%s\n", ft_strcpy(dest, src));
    return (0);
}