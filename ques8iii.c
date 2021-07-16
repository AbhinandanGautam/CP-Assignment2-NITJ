#include <stdio.h>

int main()
{
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);

    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}