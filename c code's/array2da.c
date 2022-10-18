#include<stdio.h>
int main(){
    int arr[3][2]={{1,2},{2,3},{5,6}};
    for(int i=0;i<3;i++){
        for(int j=0 ;j<2;j++)
        {
            printf("value: %d\n",arr[i][j]);
           

        }
        printf("\n");
    }
    return 0;
}