#include<stdio.h>

int main(){
    int rows;
    printf("Enter rows: ");
    scanf("%d",&rows);

    for(int i=1; i<=rows; i++){
        int j=1;
        while(j<=rows-i){
            printf("  ");
            j++;
        }
        while(j<rows+i){
            printf(" *");
            j++;
        }
        printf("\n");
    }

    return 0;
}