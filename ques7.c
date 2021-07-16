#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int c1=0,c0=0,cnt=0;
    long long int bin_num = 0;
    while (n!=0)
    {
        int rem = n%2;
        if(rem==1){
            c1++;
        }else{
            c0++;
        }
        long long int c = pow(10,cnt);
        bin_num += rem*c;
        n /= 2;
        cnt++;
    }
    printf("Binary Equivalent: %d\n",bin_num);
    printf("No. of 1's: %d\n",c1);
    printf("No. of 0's: %d\n",c0);    
    return 0;
}