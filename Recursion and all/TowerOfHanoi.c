#include<stdio.h>
void toh(int n, char a, char b, char c){
    if(n>0){
        toh(n-1, a , c , b);                                         //recursive call where swap b and c from the original call
        printf("Move disk %d from %c to %c\n", n , a, b);           //print the movement of disk
        toh(n-1, c, b, a);                                         //recursive call where swap c and a from the original call
    }
}
int main(){
    int n;
    printf("Enter number of disks: ");
    scanf("%d",&n);
    toh(n, 'a', 'b', 'c');
    return 0;
}