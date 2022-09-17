#include <unistd.h>
void ft_negativ(int n)
{
     char a;

    if (n > 0)
        write(1, "P", 1);
    else if (n == 0)
        write(1,"Neutro", 6);
    else 
        write(1,"N", 1);
}   
int main()
{
    ft_negativ(0);
    return(0);
}