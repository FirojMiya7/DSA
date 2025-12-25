#include<stdio.h>
int main(){
    int key, left=0, right=5, mid, found=0;
    int arr[]={2,3,9,15,20,55};

    printf("Enter element to search: ");
    scanf("%d", &key);

    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==key){
            found=1;
            break;
        }else if(key<arr[mid]){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    if(found){
        printf("Element %d found at index %d\n", key, mid);
    }else{
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}