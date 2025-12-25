#include<stdio.h>
void factoAlter(int x){
    int res=1;
    
    if (x < 0) {
        printf("Factorial negative number ko hudaina\n");
        return;
    }

    for(int i=x;i>1;i--){
        res=res*i;
    }
    printf("Factorial of %d is %d\n",x ,res);
}
int main(){
    int x;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&x);
    factoAlter(x);
    return 0;
}