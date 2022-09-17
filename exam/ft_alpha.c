#include <unistd.h>
void ft_alpha()
{
    char i;
    char i2;

    i = 'a';
    i2 = 'B';
    while(i <= 'z')
    {
        i = i % 2 ;

        write(1, &i, 1);
        i++;
    }
    while(i2 <= 'X')
    {
        i2 = i2 % 1;

        write(1, &i2, 1);
        i2++;
    }
}
int main()
{
    ft_alpha();
}