#include<stdio.h>//pre-processor directive, pulls in the standard input-output header which tells the compiler where the printf and other functions are declared.
int main()//Declares the entry point of the program
{
int a = 3,b=4;//int is used to store values which are integers. 
float c=3.54,d=5.55;//float is used to store values containing decimal.
int ab=a*b;
float ac=a*c;
printf("product of %d and %d is %d",a,b,ab);
printf("product of %d and %f is %f",a,c,ac);
return 0;//ends the execution of main
}