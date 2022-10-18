//malloc
#include <stdio.h>
#include<stdlib.h>
int main()  
{  
   int *ptr=(int *)malloc(sizeof(int));  
   int a=560;  
   ptr=&a;
 printf("%d\n",a);
   free(ptr);
   *ptr=NULL;
   printf("%d",a);  
   return 0;  
}  