#include <unistd.h>
void ft_rev_alpha()
{
    int rev;
    
    rev = 'z';
    while (rev >= 'a')
    {
        write (1, &rev, 1);
        rev--;
    }
}
int main()
{
    ft_rev_alpha();
}
