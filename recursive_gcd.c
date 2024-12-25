#include<stdio.h>

int rgcd(int a, int b){

    if(b==0){
        return a;
    }
    else{
        return rgcd(b, a % b);
    }
}


int main(){

    int a, b,result;
    printf("Enter the first number");
    scanf("%d", &a);
    printf("Enter the second number");
    scanf("%d", &b);
    result = rgcd(a, b);
    printf("The required gcd is %d", result);
    return 0;
}