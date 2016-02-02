#include<stdio.h>

int main(){
    long int n,sum;
    scanf("%ld",&n);
    if(n == 0){
        printf("%ld\n",1);
        return 0;
    }
    if( n >= 1){
        sum = n*(n+1)/2;
    }else{
        n = n*(-1);
        sum = n*(n+1)/2;
        sum--;
        sum = sum *(-1);
    }
    printf("%ld\n", sum);

    return 0;
}
