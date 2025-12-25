#include<stdio.h>
int gcd(int a, int b){
    if(a%b==0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}
int main(){
    int a, b;
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d",&a, &b);

    int res=gcd(a,b);
    printf("GCD of %d and %d is %d\n", a, b, res);
    return 0;
}