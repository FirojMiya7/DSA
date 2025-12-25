#include<stdio.h>
void binarySearch(int arr[], int left, int right , int key){
    int mid;
    mid=(left+right)/2;
    if(arr[mid]==key){
        printf("Element %d found at index %d\n", key, mid);
    }else if(left>=right){
        printf("Element %d not found in the array\n", key);
    }else if(key<arr[mid]){
        binarySearch(arr, left, mid-1, key);
    }else{
        binarySearch(arr, mid+1, right, key);
    }
}
int main(){
    int arr[]={2,3,9,20,30,55};
    int key;
    int left=0, right=5;
    printf("Enter element to search: ");
    scanf("%d", &key);
    binarySearch(arr, left, right, key);
    return 0;
}