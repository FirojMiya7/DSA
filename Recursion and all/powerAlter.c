#include<stdio.h>
int powr(int n, int m){
    if(n==0 || m==0){
        return 1;
    }else{
        return n*powr(n,m-1);
    }
}
int main(){
    int n, m, r;
    printf("Enter base number: ");
    scanf("%d", &n);
    printf("Enter power number: ");
    scanf("%d", &m);
    r = powr(n, m);
    printf("%d to the power of %d is %d\n", n ,m , r);
    return 0;
}