#include<stdio.h>
int main(){
    int a[]={7,2,5,8,1,9};
    int n=6,i,j,temp;
    // Insertion sort logic
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;

        //Elements greater than temp are shifted to the right
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    //Printing sorted array
    printf("Sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}