#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int argc, char *argv[]);

int main(int argc, char **argv)
{
    swap(argc, argv);

    int n;
    for (n = 1; n < argc; n++) {
        printf("%s\n", argv[n]);
    }
    //system("PAUSE");
    return 0;
}
void swap(int argc, char *argv[])
{
    int i, j;
    char *temp;

    for (i = 0; i < argc; i++)
    {
        for (j = 1; j < (argc - i - 1); j++)
        {
            if (strcmp(argv[j], argv[j + 1]) > 0)
            {
                temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
        }
    }
}