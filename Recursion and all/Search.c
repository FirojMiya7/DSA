#include<stdio.h>
int main(){
    int arr[]={1,2,5,6,8};
    int found=0;
    int key;

    printf("Enter the element to search: ");
    scanf("%d",&key);

    for(int i=0;i<5;i++){
        if(key==arr[i]){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("Element found\n");
    }else{
        printf("Element not found\n");
    }
    return 0;
}