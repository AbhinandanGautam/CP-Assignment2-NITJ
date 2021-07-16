#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int n=num;
    int rev = n%10;
    n = n/10;
    while(n){
        rev = (rev*10) + (n%10);
        n = n/10;
    }
    if(rev == num){
        printf("Number is a palindrome number.\n\n");
    }else{
        printf("Number is a not palindrome number.\n\n");
    }
    return 0;
}