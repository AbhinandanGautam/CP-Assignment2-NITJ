#include<stdio.h>

int main(){
    int n;
    printf("Enter rows: ");
    scanf("%d",&n);
    
    for(int i=1; i<=2*n-1; i++){
        int j=1;
        while (j<=i && i<=n)
        {
            printf(" *");
            j++;
        }
        while(j<=2*n-i && i>n){
            printf(" *");
            j++;
        }
        
        printf("\n");
    }

    return 0;
}