#include<stdio.h>

int main(){
    int a=5;
    int val=1;
    for(int i=1; i<=5; i++){
        int j=1;
            while(j<=5-i){
                printf("  "); j++;
            }
            while(j>5-i && j<5+i){
                while(j>5-i && j<=5){
                    printf(" %d",val);
                    val++; j++;
                }
                val--;
                while(j>5 && j<5+i){
                    printf(" %d",val-1);
                    val--; j++;
                }
            }
            while(j<=2*a-1){
                printf("  "); j++;
            }
        printf("\n");
        val++;
    }
    return 0;
}