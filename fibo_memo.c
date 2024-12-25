#include<stdio.h>

int uni_index = 0;
int key[100], value[100];

void insert(int k, int v){
    key[uni_index] = k;
    value[uni_index] = v;
    uni_index++;
}

int give_value(int n){
    for (int i = 0; i < 100;i++){
       if(key[i]==n){
           return value[i];
       }
    }
}

int key_checker(int k){
    int flag=0;
    for (int i = 0; i < 100;i++){
        if(key[i]==k){
            flag = 1;
            break;
        }
    }
    return flag;
};

long int fibom(int n){

    if(n==1 || n == 2){
        return 1;
    }
    else{
        if(key_checker(n)==0){
            int result;
            result = fibom(n - 1) + fibom(n - 2);
            insert(n, result);
        }
        return give_value(n);
 }
}


int main(){
    int num;
    long int result;
    printf("Enter the number:\n");
    scanf("%d", &num);
    result = fibom(num);
    printf("The required fibonacci term is %ld", result);
    return 0;
}
