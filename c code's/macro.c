#include<stdio.h>

#define AREA_TRI

int main()

{
#ifdef AREA_TRI    
printf("This is Triangle are calculation program");
float base,height;
fflush(stdout);
printf("Enter base and height");
fflush(stdout);
scanf("%f%f",&base,&height);
printf("Area of triangle = %f\n",(3.14*base*height));
#endif
return 0;

}
