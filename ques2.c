#include<stdio.h>

// recursive function
int fib(int n){
    // base case
    if(n<=1){
        return n;
    }

   return fib(n-1)+fib(n-2);
}

int main(){
    printf("Enter a number: ");

    int n,sum=0;
    scanf("%d",&n);

    printf("Fibonacci series: ");
    while (fib(sum)<=n){
        printf("%d,",fib(sum));
        sum++;
    }
    printf("\n");
    return 0;
}