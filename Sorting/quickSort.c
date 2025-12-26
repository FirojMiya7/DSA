#include<stdio.h>
void quickSort(int a[], int left, int right){
    int i = left;
    int j = right; 
    int pivot= a[left];
    int temp;
    if(left<right){
        while(i<j){
            while(a[i]<=pivot&&i<right)
                i++;
            while(a[j]>pivot)
                j--;
            if(i<j){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[left];
        a[left] = a[j];
        a[j] = temp;
        
        quickSort(a, left, j-1);
        quickSort(a,j+1, right);
    }
}
int main(){
    int a[]={7,2,9,4,1};
    int n=5;
    quickSort(a,0,n-1);
    printf("Ascending order: ");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}