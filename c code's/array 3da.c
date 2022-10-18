#include<stdio.h>
int main(){
    int arr[2][3][3]={{{2,3,5},{3,5,5},{5,2,2}},{{2,3,5},{5,5,3},{6,6,2}}};
    for(int i=0;i<3;i++) {
        for(int j=0 ;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("value: %d\n",arr[i][j][k]);
                printf("\n");

            }

             

        }
        printf("\n");


    }
    return 0;
}
