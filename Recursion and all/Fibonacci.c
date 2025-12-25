#include<stdio.h>
int fibo(int p){
    if(p<=2){                   //or if(p==1 || p==0)
        return 1;
    }else{
        return fibo(p-1) + fibo(p-2);
    }
}
int main(){
    int f, n;
    printf("Enter a number to find its Fibonacci value: ");
    scanf("%d",&n);

    f=fibo(n);
    
    printf("The %dth Fibonacci number is %d\n", n, f);
    return 0;
}