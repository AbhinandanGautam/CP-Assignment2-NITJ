#include <stdio.h>

int main()
{
    int val = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d", val);
            val++;
        }
        
        printf("\n");
    }

    return 0;
}