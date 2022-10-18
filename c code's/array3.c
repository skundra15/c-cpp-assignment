#include<stdio.h>
int main(){
    int arr[5],i;
    printf("size of array %d \n",sizeof(int));
    for(i=0;i<5;i++)
        printf("address of arr[%d] is %p\n",i,&arr[i]);
        return 0;
    
}