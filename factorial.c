#include<stdio.h>
int facto(int n){
    if(n==0){
        return 1;
    }else{
        return n*facto(n-1);
    }
}
int main(){
    int a;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&a);
    
    int r = facto(a);
    printf("The factorial of %d is: %d\n", a , r);
    return 0;
}