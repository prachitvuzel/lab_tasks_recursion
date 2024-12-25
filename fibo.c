#include<stdio.h>





int fibo(int n){

    if(n==1 || n == 2){
        return 1;
    }
    else{
        return fibo(n - 1) + fibo(n - 2);
   }
}


int main(){
    int num,result;
    printf("Enter the number:\n");
    scanf("%d", &num);
    result = fibo(num);
    printf("The required fibonacci term is %d", result);
    return 0;
}
