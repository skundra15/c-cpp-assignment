#include <stdio.h>

void rev(int arr[],int n);
void printarr(int arr[],int n);

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    rev(arr,8);
    printarr(arr,8);
    return 0;

}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){

        printf("%d",arr[i]);
    
    }
    printf("\n");

}
void rev(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstval=arr[i];
        int secndval=arr[n-i-1];
        arr[i]=secndval;
        arr[n-i-1]=firstval;
    }
}
