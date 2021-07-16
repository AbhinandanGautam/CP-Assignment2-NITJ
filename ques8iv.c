#include<stdio.h>

int main(){
    int a;
    printf("Enter rows: ");
    scanf("%d",&a);
    int val=1;

    for(int i=1; i<=a; i++){
        int j=1;
            while(j<=a-i){
                printf(" "); j++;
            }
            while(j>a-i && j<a+i){
                while(j>a-i && j<=a){
                    printf("%d",val);
                    val++; j++;
                }
                val--;
                while(j>a && j<a+i){
                    printf("%d",val-1);
                    val--; j++;
                }
            }
            while(j<=2*a-1){
                printf(" ");
                j++;
            }
        printf("\n"); val++;
    }
    return 0;
}