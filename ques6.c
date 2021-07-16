#include <stdio.h>

int main()
{
    printf("Enter ten different numbers: ");
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    int fesum = 0, fosum = 0, wesum = 0, wosum = 0, dwesum = 0, dwosum = 0;

    //using for loop
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            fesum = fesum + a[i];
        }
        else
        {
            fosum = fosum + a[i];
        }
    }
    printf("Even No. Sum = %d     Odd No. Sum = %d\n", fesum, fosum);

    //using while loop
    int j = 0;
    while (j < 10)
    {
        if (a[j] % 2 == 0)
        {
            wesum = wesum + a[j];
        }
        else
        {
            wosum = wosum + a[j];
        }
        j++;
    }
    printf("Even No. Sum = %d     Odd No. Sum = %d\n", wesum, wosum);

    //using do while loop
    int k = 0;
    do
    {
        if (a[k] % 2 == 0)
        {
            dwesum = dwesum + a[k];
        }
        else
        {
            dwosum = dwosum + a[k];
        }
        k++;
    } while (k < 10);
    printf("Even No. Sum = %d     Odd No. Sum = %d\n", dwesum, dwosum);

    return 0;
}