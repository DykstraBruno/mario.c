#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("altura entre 1 e 8: ");
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        for (int v = 0; v < 2; v++)
        {
            printf(" ");
        }
        for (int h = 0; h <= i; h++)
        {
            printf("#");
        }
        for (int s = 0; s < n - i - 1; s++)
        {
            printf("");
        }
        printf("\n");
    }
    return 0;
}
