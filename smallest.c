#include<stdio.h>
int main(){
    int arr[]={10,2,3,5,4};
    int min=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The smallest element is: %d\n",min);
    return 0;
}