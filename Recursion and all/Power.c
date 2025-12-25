#include<stdio.h>
int powr(int n, int x){
    if(x==0){
        return 1;
    }else{
        return n*powr(n,x-1);
    }
}
int main(){
    int n,m,r;
    printf("Enter base number: ");
    scanf("%d",&n);
    printf("Enter Power number: ");
    scanf("%d",&m);
    r=powr(n,m);
    printf("%d to the power of %d is %d\n", n, m, r);
    return 0;
}