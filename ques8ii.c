#include<stdio.h>

int main(){
    int rows;
    printf("Enter rows: ");
    scanf("%d",&rows);

    int val=0;
    for(int i=1; i<=rows; i++){
        int j=1;
        while(j<=rows-i){
            printf("  "); j++;
        }
        while(j<=rows){
            printf(" %d",val);
            if(j==rows){
                j++; break;
            }
            j++; val--;
        }
        val++;
        while(j<rows+i){
            printf(" %d",val);
            j++; val++;
        }
        printf("\n");
    }
    return 0;
}
