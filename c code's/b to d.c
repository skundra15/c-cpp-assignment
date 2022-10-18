#include <stdio.h>
int main() 
{
    int a[10], number, i, j;
    printf("\n  Enter the Num. Convert  :  ");
    scanf("%d", &number);
    
    for(i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }
    
    printf("\n Binary Num.  =  ");
    for(j = i - 1; j >= 0; j--)  {
        printf(" %d ", a[j]);
    }
    printf("\n");
    return 0;
}
