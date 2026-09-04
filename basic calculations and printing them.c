#include<stdio.h>
int main()
{
float a=7,b=20;//even if we're storing integer values, we should use float to avoid truncation in division!
float D=(a+b)/2;
printf("Double of stored value \n%f",2*a);
printf("\nSquare of b = %f",b*b);
printf("\ndifference of a and b = %f",a-b);
printf("\naverage value of a and b is %f",D);
return 0;
}