#include <stdio.h>
int strcmp_ptr(char *src1, char *src2)
{
    int i=0;
    while((*src1!='\0') || (*src2!='\0'))
    {
        if(*src1 > *src2)
            return 1;
        if(*src1 < *src2)
            return -1;
        src1++;
        src2++;
    }
    return 0;
}

int main()
{
    char amessage[] = "string1";
    char bmessage[] = "string";
    printf(" value is %d\n",strcmp_ptr(amessage,bmessage));
    printf(" value is %d\n",strcmp_ptr(amessage,bmessage));
}

