#include<stdio.h>

int tail_fact(int r, int n){

    if(n==0){
        return r;
    }
    else{
        return tail_fact(r * n, n - 1);
    }
}


int main(){

    int num,result;
    printf("Enter the number:\n");
    scanf("%d", &num);
    result = tail_fact(1, num);
    printf("The required factorial is %d", result);
    return 0;
}
