 #include<stdio.h>
 void tower(int n, char src, char dst, char temp)
 {
    if(n==1)
    {
        printf("Move disk %d from %c to %c\n",n,src,dst);
        return;
    }
    else{
        tower(n - 1, src, temp, dst);
        printf("move disk %d from %c  to %c \n", n, src, dst);
        tower(n - 1, temp, dst, src);
    }
 }
 int main()
 {
     int n;
     printf("enter the number of disk:");
     scanf("%d", &n);
     tower(n, 'A', 'C', 'B');
 }