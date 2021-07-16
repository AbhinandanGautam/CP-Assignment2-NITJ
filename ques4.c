#include<stdio.h>
#include<math.h>

int isPrime(int n){
    int flag=1;
    // Iterate from 2 to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
 
    if(n <= 1)
        flag = 0;
 
    if(flag == 1) {
       return 1;
    }else{
        return 0;
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Prime numbers b/w 1 and %d : ",num);

    for(int i=1; i<=num; i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
    printf("\n");

    return 0;
}